import org.apache.jena.ontology.*;
import org.apache.jena.rdf.model.*;
import org.apache.jena.util.iterator.ExtendedIterator;
import openllet.jena.PelletReasonerFactory;

import java.io.*;
import java.util.*;

/**
 * Programme de classification avec Pellet
 * Récupère toutes les paires de sous-classes (hiérarchie complète)
 */
public class ClassificationPellet {

    public static void main(String[] args) {
        if (args.length < 1) {
            System.err.println("Usage: java ClassificationPellet <ontology_file> [output_file]");
            System.exit(1);
        }

        String ontologyFile = args[0];
        String outputFile = args.length > 1 ? args[1] : "classification_results.txt";

        try {
            System.out.println("==========================================");
            System.out.println("Classification avec Pellet");
            System.out.println("==========================================");
            System.out.println("Ontology: " + ontologyFile);
            System.out.println("Output: " + outputFile);
            System.out.println();

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

            // Effectuer la classification
            System.out.println("Classification en cours...");
            long startClassif = System.currentTimeMillis();

            // Map pour stocker toutes les relations de subsomption
            // Format: SubClass -> Set<SuperClass>
            Map<String, Set<String>> subClassOf = new TreeMap<>();
            
            // Récupérer toutes les classes
            ExtendedIterator<OntClass> classes = model.listClasses();
            List<OntClass> allClasses = new ArrayList<>();
            
            while (classes.hasNext()) {
                OntClass cls = classes.next();
                if (cls.isURIResource()) {
                    allClasses.add(cls);
                }
            }

            System.out.println("Nombre de classes: " + allClasses.size());
            int processed = 0;

            // Pour chaque classe, récupérer ses super-classes
            for (OntClass subClass : allClasses) {
                String subUri = subClass.getURI();
                Set<String> superClasses = new TreeSet<>();

                // Récupérer toutes les super-classes (directes et indirectes)
                ExtendedIterator<OntClass> supers = subClass.listSuperClasses(false); // false = toutes, pas seulement directes
                
                while (supers.hasNext()) {
                    OntClass superClass = supers.next();
                    if (superClass.isURIResource()) {
                        String superUri = superClass.getURI();
                        // Éviter les réflexivités (A subClassOf A)
                        if (!subUri.equals(superUri)) {
                            superClasses.add(superUri);
                        }
                    }
                }

                // Ajouter owl:Thing pour toutes les classes (sauf owl:Thing elle-même)
                if (!subUri.equals("http://www.w3.org/2002/07/owl#Thing")) {
                    superClasses.add("owl:Thing");
                }

                if (!superClasses.isEmpty()) {
                    subClassOf.put(subUri, superClasses);
                }

                processed++;
                if (processed % 10 == 0) {
                    System.out.print(".");
                }
            }

            long endClassif = System.currentTimeMillis();
            System.out.println();
            System.out.println("✓ Classification terminée en " + (endClassif - startClassif) + " ms");
            
            // Compter le nombre total de paires
            int totalPairs = 0;
            for (Set<String> supers : subClassOf.values()) {
                totalPairs += supers.size();
            }
            System.out.println("  Paires SubClassOf: " + totalPairs);

            // Écrire les résultats
            System.out.println("Écriture des résultats dans " + outputFile + "...");
            writeResults(subClassOf, outputFile);
            System.out.println("✓ Résultats écrits");

            System.out.println();
            System.out.println("==========================================");
            System.out.println("Terminé !");
            System.out.println("==========================================");

        } catch (Exception e) {
            System.err.println("ERREUR: " + e.getMessage());
            e.printStackTrace();
            System.exit(1);
        }
    }

    private static void writeResults(Map<String, Set<String>> subClassOf, String outputFile) 
            throws IOException {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(outputFile))) {
            for (Map.Entry<String, Set<String>> entry : subClassOf.entrySet()) {
                String subClass = entry.getKey();
                Set<String> superClasses = entry.getValue();

                for (String superClass : superClasses) {
                    // Format: <SubClass> SubClassOf <SuperClass>
                    writer.write("<" + subClass + "> SubClassOf ");
                    
                    if (superClass.equals("owl:Thing")) {
                        writer.write("owl:Thing");
                    } else {
                        writer.write("<" + superClass + ">");
                    }
                    
                    writer.newLine();
                }
            }
        }
    }
}
