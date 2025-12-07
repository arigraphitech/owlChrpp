# 📝 Changelog - ParserProject

Toutes les modifications notables de ce projet seront documentées dans ce fichier.

Le format est basé sur [Keep a Changelog](https://keepachangelog.com/fr/1.0.0/),
et ce projet adhère au [Semantic Versioning](https://semver.org/lang/fr/).

---

## [Unreleased]

### À Faire
- [ ] Implémentation de la matérialisation transitive pour SubClassOf
- [ ] Correction complète de querySubClassOf
- [ ] Correction complète de queryClassification
- [ ] Support OWL 2 RL complet
- [ ] Ajout de benchmarks de performance
- [ ] Interface CLI améliorée avec options

---

## [1.0.0] - 2025-12-07

### 🎉 Version Initiale

#### Ajouté
- **Système de raisonnement OWL 2** implémenté en CHR++
- **Parser COWL** pour OWL 2 Functional Syntax
- **Inférences OWL 2** :
  - Hiérarchie de classes (SubClassOf, EquivalentClass)
  - Propriétés d'objets (transitivité, symétrie, inversibilité)
  - Propriétés de données avec types XSD
  - Classes complexes (IntersectionOf, UnionOf, ComplementOf)
  - Restrictions (SomeValuesFrom, AllValuesFrom, MaxCardinality)
  - Individus (SameIndividual, DifferentIndividuals)
  - Contraintes de disjonction

- **Système de requêtes** :
  - `querySuperClassOfUri` - Récupère les superclasses (✅ fonctionne à 100%)
  - `querySubClassOfUri` - Récupère les sous-classes (⚠️ partiel)
  - `queryClassificationUri` - Classification d'individus (⚠️ problème)
  - `queryClassificationTempUri` - Classification temporaire (✅ fonctionne)
  - `queryInstanceURI` - Vérification d'instance (✅ fonctionne)
  - `queryInstancesURI` - Liste des instances (✅ fonctionne)

- **Types de données XSD** :
  - Support de `xsd:string`, `xsd:integer`, `xsd:float`, `xsd:double`
  - Support de `xsd:boolean`, `xsd:dateTime`
  - Hiérarchie de types avec vérification

- **Exemples et tests** :
  - Ontologie académique (example2.ofn)
  - Ontologie Pizza (example_pizza.owl)
  - 8 tests intégrés

- **Documentation complète** :
  - README.md avec guide de démarrage
  - INSTALL.md avec instructions détaillées
  - DEPENDENCIES.md listant toutes les dépendances
  - CONTRIBUTING.md pour les contributeurs
  - Rapports d'analyse des tests

- **Configuration** :
  - CMakeLists.txt avec intégration CHR++ et COWL
  - Makefile pour compilation simplifiée
  - .gitignore approprié

#### Corrigé
- ✅ Ajout de owl:Thing dans querySuperClassOf
- ✅ Inférence IntersectionOf → composants (PhDStudent → Student)
- ✅ Suivi des EquivalentClass dans querySuperClassOf
- ✅ Suppression des règles de cleanup qui s'exécutaient trop tôt

#### Problèmes Connus
- ⚠️ querySubClassOf retourne seulement la classe initiale (pas les sous-classes)
- ⚠️ queryClassification ne retourne rien
- 🐛 Cause : Les règles de propagation CHR++ ne sont pas rétroactives
- 📋 Solution proposée : Matérialisation transitive des relations

#### Statistiques
- **Lignes de code CHR++** : ~770 lignes (owlFunctional.chrpp)
- **Taux de succès des tests** : 79% (5/8 complets, 2/8 partiels, 1/8 échec)
- **Règles d'inférence** : ~50 règles CHR++
- **Contraintes définies** : ~45 types de contraintes

---

## [0.9.0] - 2025-12-06

### En Développement

#### Ajouté
- Règles de base OWL 2
- Parser COWL initial
- Tests préliminaires

#### Notes
- Version de développement avant la première release

---

## Format des Versions

### Types de Changements

- **Ajouté** : Nouvelles fonctionnalités
- **Modifié** : Changements dans des fonctionnalités existantes
- **Déprécié** : Fonctionnalités bientôt supprimées
- **Supprimé** : Fonctionnalités supprimées
- **Corrigé** : Corrections de bugs
- **Sécurité** : Correctifs de sécurité

### Versionnement Sémantique

Format : `MAJOR.MINOR.PATCH`

- **MAJOR** : Changements incompatibles avec l'API
- **MINOR** : Ajout de fonctionnalités rétro-compatibles
- **PATCH** : Corrections de bugs rétro-compatibles

---

## Roadmap

### Version 1.1.0 (Planifiée)

#### Priorité Haute
- [ ] Matérialisation transitive de SubClassOf
- [ ] Correction de querySubClassOf (retour des sous-classes)
- [ ] Correction de queryClassification (retour des classes)

#### Priorité Moyenne
- [ ] Ajout de nouvelles queries :
  - `queryEquivalentClassesUri` - Classes équivalentes
  - `queryDomainUri` - Domaine d'une propriété
  - `queryRangeUri` - Range d'une propriété
  - `queryPropertiesOfIndividualUri` - Propriétés d'un individu
- [ ] Optimisation des performances
- [ ] Support de formats supplémentaires (Turtle, N-Triples)

#### Priorité Basse
- [ ] Interface en ligne de commande améliorée
- [ ] Export des résultats (JSON, CSV)
- [ ] Visualisation graphique de l'ontologie

### Version 2.0.0 (Future)

- [ ] Support complet OWL 2 DL
- [ ] Raisonnement SWRL (Semantic Web Rule Language)
- [ ] API REST
- [ ] Interface graphique
- [ ] Mode serveur

---

## Historique des Décisions Techniques

### Pourquoi CHR++ ?

- **Déclaratif** : Règles expressives et lisibles
- **Extensible** : Facile d'ajouter de nouvelles règles
- **Performant** : Gestion efficace des contraintes
- **Académique** : Bien documenté dans la littérature

### Pourquoi COWL ?

- **Léger** : Bibliothèque C pure, pas de dépendances lourdes
- **Complet** : Support OWL 2 complet
- **Performant** : Parser rapide
- **Actif** : Projet maintenu

### Pourquoi C++17 ?

- **Moderne** : Features modernes (optional, string_view)
- **Compatible** : Intégration facile avec C (COWL)
- **Performant** : Compilé, pas d'overhead
- **Standard** : Largement supporté

---

## Contributions

Merci aux contributeurs :

- **arigraphitech** - Développement initial et maintenance

Pour contribuer, consultez [CONTRIBUTING.md](CONTRIBUTING.md).

---

## Liens

- **Repository** : [https://github.com/arigraphitech/owlChrpp](https://github.com/arigraphitech/owlChrpp)
- **Issues** : [https://github.com/arigraphitech/owlChrpp/issues](https://github.com/arigraphitech/owlChrpp/issues)
- **Releases** : [https://github.com/arigraphitech/owlChrpp/releases](https://github.com/arigraphitech/owlChrpp/releases)

---

**Dernière mise à jour** : 7 décembre 2025
