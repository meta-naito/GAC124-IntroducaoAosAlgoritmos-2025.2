//semana 5, ex 15
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    string palavra1 = "", palavraAux = "", arqEntrada = "";
    int i = 1;

    cin >> arqEntrada;

    ifstream entrada(arqEntrada);
        entrada >> palavraAux;
        
    while (entrada >> palavra1) {
        if (palavra1 == palavraAux) {
            i++;
        }
        else if (palavra1 != palavraAux) {
            cout << i;
            i = 1;
        }
        palavraAux = palavra1;
    }

    cout << i << endl;


    return 0;
}