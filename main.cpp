#include <iostream>
#include "parsercowl.h"
#include <fstream>
using namespace std;

int main()
{    std::string space;
    ParserCowl<std::string> parser("example2.ofn",space);
    std::cout<<"onto : "<<parser.getOnto()<<std::endl;
    parser.load();
     /*std::ifstream f("example2.ofn");
        if (!f) {
            std::cerr << "⚠️ Fichier example2.ofn introuvable au moment de l'exécution." << std::endl;
        } else {
            std::cerr << "✅ Fichier example2.ofn trouvé." << std::endl;
        }*/
    cout << "Hello World!" << endl;
    return 0;
}
