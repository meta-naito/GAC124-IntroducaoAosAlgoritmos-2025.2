//semana 12, atividade prática 1
#include <iostream>
using namespace std;

int contaPositivos(int *vetor, int tam) {
    int cont = 0;

    for (int i = 0; i < tam; i++) {
        if (vetor[i] > 0) {
            cont++;
        }
    }

    return cont;
}

void redimensionaVetor(int *&vetor, int &tamOriginal, int tamPos) {
    int *temp = new int[tamPos];
    int posAux = 0;

    for (int i = 0; i < tamOriginal; i++) {
        if (vetor[i] > 0) {
            temp[posAux] = vetor[i];
            posAux++;
        }
    }

    delete [] vetor;
    
    tamOriginal = tamPos;
    vetor = temp;

}

int main() {
    int tamVetor = 10;
    int *vetor = new int[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    int contaPositivo = contaPositivos(vetor,tamVetor);

    redimensionaVetor(vetor, tamVetor, contaPositivo);

    for (int i = 0; i < tamVetor; i++) {
        cout << vetor[i] << " ";
    }

    delete [] vetor;

    return 0;
}