//semana 5, ex 14
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string palavra1 = "", palavraAux = "", arqEntrada = "";
    int i = 0;

    cin >> arqEntrada;

    ifstream entrada(arqEntrada);
        entrada >> palavraAux;
        
    while (entrada >> palavra1) {
        if (palavra1 != palavraAux) {
            i++;
        }
        else if (palavra1 == palavraAux) {
            cout << i;
            i = -1;
        }
        palavraAux = palavra1;
    }

    cout << (i+1) << endl;

    return 0;
}