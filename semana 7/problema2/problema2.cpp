//semana 7, ex 2
#include <iostream>
using namespace std;

//6 7 3 1 2 4 5 8 9 9

void diminuiVida(int vet[], int indice) {    
    vet[indice]--; //diminui em 1 a vida do inimigo na posicao do vetor
}

int derrotados(int vet[], int tam) {
    int qDerrotas = 0;
    bool derrota = false;
    
    for (int i = 0; i < tam; i++) {
        diminuiVida(vet, i); //diminui em 1 a vida do inimigo
        
        if (vet[i] == 0) {
            derrota = true;
            
            if (derrota == true) {
                qDerrotas++;
                vet[i] = -1;
            }
        }
    }


    //se o vetor ainda tiver um numero 1, refaz isso tudo ate nao tiver mais inimigos ou tal
        
    return qDerrotas;
}


int main () {
    const int qInimigos = 10;
    int vidaInimigos[qInimigos];

    for (int i = 0; i < qInimigos; i++) {
        cin >> vidaInimigos[i];
    }
    int derrotas = derrotados(vidaInimigos, qInimigos);

    for (int i = 0; i < qInimigos; i++) {
        if (vidaInimigos[i] == 1) {
            derrotas = derrotados(vidaInimigos, qInimigos);
        }
    }

    cout << derrotas << endl;

    return 0;
}