//semana 5, ex 22
#include <iostream>
#include <fstream>

using namespace std;
typedef string str;

int main () {
    str arqEntradaPT, arqEntradaEN, arqSaida;
    str palavraPT, palavraEN;

    cin >> arqEntradaPT >> arqEntradaEN >> arqSaida;

    ifstream entradaPT(arqEntradaPT);
    ifstream entradaEN(arqEntradaEN);

    ofstream saida(arqSaida);

    while ((entradaPT >> palavraPT) and (entradaEN >> palavraEN)) {
        saida << palavraPT << ": " << palavraEN << endl;
    }

}