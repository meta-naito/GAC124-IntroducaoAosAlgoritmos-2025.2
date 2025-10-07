//semana 5, ex 19
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    string nomeArquivo;
    string nome1, nome2, nome3, voto;
    int qVotos = 0, votos1 = 0, votos2 = 0, votos3 = 0;

    cin >> nomeArquivo;
    ifstream entrada(nomeArquivo);
        entrada >> nome1 >> nome2 >> nome3 >> qVotos;

    //contagem dos votos
    if (entrada) {
        while (entrada >> voto) {
            if (voto == nome1) {
                votos1++;
            }
            else if (voto == nome2) {
                votos2++;
            }
            else {
                votos3++;
            }
        }
    }
    
    //quem teve mais votos
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