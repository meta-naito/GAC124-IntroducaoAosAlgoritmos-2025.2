//semana 5, ex 19
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    string nomeVoto = "", nome1 = "", nome2 = "", nome3 = "", arqEntrada = "";
    int qVotos = 0, votos1, votos2, votos3;

    cin >> arqEntrada;

    ifstream entrada(arqEntrada);
        entrada >> nome1 >> nome2 >> nome3 >> qVotos;
    
    //contagem dos votos
    while (entrada >> nomeVoto) {
        if (nomeVoto == nome1) {
            votos1++;
        }
        else if (nomeVoto == nome2) {
            votos2++;
        }
        else {
            votos3++;
        }
    }

    //escolhendo o que ganhou mais votos
    if ((votos1 > votos2) and (votos1 > votos3)) {
        cout << votos1 << endl;
    }
    else if ((votos2 > votos1) and (votos2 > votos3)) {
        cout << votos2 << endl;
    }
    else {
        cout << votos3 << endl;
    }

    return 0;
}