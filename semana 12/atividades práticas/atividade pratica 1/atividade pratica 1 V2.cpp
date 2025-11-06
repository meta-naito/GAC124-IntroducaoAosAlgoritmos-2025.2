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

void redimensionaVetor(int *&vetor, int &tamOriginal, int pos) {
    int *temp = new int[tamOriginal - 1];
    int posAux = 0;

    for (int i = 0; i < pos; i++) {
        temp[i] = vetor[i];
    }

    delete [] vetor;
    
    tamOriginal--;
    vetor = temp;
}

int main() {
    int tamVetor = 10, valor = 0;
    int *vetor = new int[tamVetor];

    cin >> valor;    

    int cont = 0;
    while (cont <= tamVetor) {
        if (vetor[cont] <= 0) {
            redimensionaVetor(vetor, tamVetor, cont);
        }
        else {
            vetor[cont] = valor;
            cont++;
            cin >> valor;
        }
    
    }

    


    for (int i = 0; i < tamVetor; i++) {
        cout << vetor[i] << " ";
    }

    delete [] vetor;

    return 0;
}