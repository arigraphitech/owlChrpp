il faut télécharger cowl,chrpp 

owlFunctional contient la def de l'union et intersection (premier test avc liste et sans passer par le parseur) 

owlPropertyChain contient la def des proprietes des ChainProperty avec un exemple sans passer par des listes (sans parseur) 

pour executer : 

../chrpp/chrppc/chrppc owl.chrpp -sout > owl.cpp

 g++ -std=c++17 -I../chrpp/runtime owl.cpp -o owl
 
./owl

