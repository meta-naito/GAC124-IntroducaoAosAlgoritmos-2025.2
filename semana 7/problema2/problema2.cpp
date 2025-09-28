//semana 7, ex 2
#include <iostream>
using namespace std;

//6 7 3 1 2 4 5 8 9 9

int derrotados(int vet[], int tam, bool derrota[]) {
    int qDerrotas = 0;
   
    for (int i = 0; i < tam; i++) {
        vet[i]--; //diminui em 1 a vida do inimigo

        if (vet[i] == 0) {
            derrota[i] = true;
            qDerrotas++;

        }
    }

    return qDerrotas;
}

int main () {
    const int qInimigos = 10;
    int vidaInimigos[qInimigos];
    bool vetorDerrota[qInimigos] = {false, false, false, false, false, false, false, false, false, false};

    for (int i = 0; i < qInimigos; i++) {
        cin >> vidaInimigos[i];
    }

    int derrotas = derrotados(vidaInimigos, qInimigos, vetorDerrota);

    for (int i = 0; i < qInimigos; i++) {
        if (vidaInimigos[i] == 1) {
            derrotas = derrotados(vidaInimigos, qInimigos);
        }
    }
*/
    cout << derrotas << endl;

    return 0;
}