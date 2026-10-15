import org.apache.jena.ontology.*;
import org.apache.jena.query.*;
import org.apache.jena.rdf.model.*;
import org.apache.jena.reasoner.Reasoner;
import openllet.jena.PelletReasonerFactory;

import java.io.*;
import java.nio.file.*;
import java.util.*;

/**
 * Exécuteur de requêtes SPARQL OWL2RL avec Pellet
 */
public class OWL2RLQueryExecutor {

    public static void main(String[] args) {
        if (args.length < 1) {
            System.err.println("Usage: java OWL2RLQueryExecutor <ontology_file> [output_dir]");
            System.exit(1);
        }

        String ontologyFile = args[0];
        String outputDir = args.length > 1 ? args[1] : "results";

        try {
            System.out.println("==========================================");
            System.out.println("OWL2RL SPARQL Query Executor with Pellet");
            System.out.println("==========================================");
            System.out.println("Ontology: " + ontologyFile);
            System.out.println("Output: " + outputDir);
            System.out.println();

            // Créer le répertoire de sortie
            new File(outputDir).mkdirs();

            // Charger les requêtes
            List<QueryInfo> queries = loadQueries("owl2rl_queries.txt");
            System.out.println("✓ " + queries.size() + " requêtes chargées");

            // Charger l'ontologie avec Pellet
            System.out.println("Chargement de l'ontologie avec Pellet...");
            long startLoad = System.currentTimeMillis();

            OntModel model = ModelFactory.createOntologyModel(
                PelletReasonerFactory.THE_SPEC
            );

            model.read("file:" + ontologyFile);

            long endLoad = System.currentTimeMillis();
            System.out.println("✓ Ontologie chargée en " + (endLoad - startLoad) + " ms");
            System.out.println("  Axiomes: " + model.size());

            // Préparer l'inférence
            System.out.println("Préparation du raisonnement...");
            model.prepare();
            System.out.println("✓ Reasoner prêt");
            System.out.println();

            // Exécuter chaque requête
            String baseName = new File(ontologyFile).getName().replace(".owl", "");

            for (QueryInfo queryInfo : queries) {
                executeQuery(model, queryInfo, outputDir, baseName);
            }

            System.out.println();
            System.out.println("==========================================");
            System.out.println("Toutes les requêtes ont été exécutées !");
            System.out.println("Résultats dans: " + outputDir);
            System.out.println("==========================================");

        } catch (Exception e) {
            System.err.println("ERREUR: " + e.getMessage());
            e.printStackTrace();
            System.exit(1);
        }
    }

    private static List<QueryInfo> loadQueries(String filename) throws IOException {
        List<QueryInfo> queries = new ArrayList<>();

        for (String line : Files.readAllLines(Paths.get(filename))) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;

            String[] parts = line.split("\\|", 2);
            if (parts.length == 2) {
                int number = Integer.parseInt(parts[0].trim());
                String sparql = parts[1].trim();
                queries.add(new QueryInfo(number, sparql));
            }
        }

        return queries;
    }

    private static void executeQuery(OntModel model, QueryInfo queryInfo,
                                    String outputDir, String baseName) {
        System.out.println("Exécution Query " + queryInfo.number + "...");

        long start = System.currentTimeMillis();

        try {
            Query query = QueryFactory.create(queryInfo.sparql);

            try (QueryExecution qexec = QueryExecutionFactory.create(query, model)) {
                ResultSet results = qexec.execSelect();

                // Sauvegarder les résultats
                String outputFile = String.format("%s/%s_query%02d.txt",
                                                   outputDir, baseName, queryInfo.number);

                int count = saveResults(results, outputFile);

                long end = System.currentTimeMillis();
                System.out.println("  ✓ Query " + queryInfo.number + " terminée: " +
                                 count + " résultats en " + (end - start) + " ms");
            }

        } catch (Exception e) {
            System.err.println("  ✗ Erreur Query " + queryInfo.number + ": " + e.getMessage());
        }
    }

    private static int saveResults(ResultSet results, String filename) throws IOException {
        int count = 0;

        try (PrintWriter writer = new PrintWriter(new FileWriter(filename))) {
            List<String> vars = results.getResultVars();

            while (results.hasNext()) {
                QuerySolution solution = results.nextSolution();

                List<String> values = new ArrayList<>();
                for (String var : vars) {
                    RDFNode node = solution.get(var);
                    if (node != null) {
                        if (node.isURIResource()) {
                            values.add("<" + node.asResource().getURI() + ">");
                        } else if (node.isLiteral()) {
                            values.add("\"" + node.asLiteral().getString() + "\"");
                        } else {
                            values.add(node.toString());
                        }
                    }
                }

                writer.println(String.join(" ", values));
                count++;
            }
        }

        return count;
    }

    static class QueryInfo {
        int number;
        String sparql;

        QueryInfo(int number, String sparql) {
            this.number = number;
            this.sparql = sparql;
        }
    }
}
