il faut télécharger cowl,cstring 

owlFunctional contient la def de l'union et intersection (premier test avc liste et sans passer par le parseur) 

owlPropertyChain contient la def des proprietes de chaines avec une exemple (sans parseur) 

pour executer : 

../chrpp/chrppc/chrppc owl.chrpp -sout > owl.cpp

 g++ -std=c++17 -I../chrpp/runtime owl.cpp -o owl
 
./owl

