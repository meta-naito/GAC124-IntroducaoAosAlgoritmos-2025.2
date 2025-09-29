//semana 7, ex 5
#include <iostream>
using namespace std;

int contaPositivos (float vet[], int tam) {
    int cont = 0;

    for (int i = 0; i < tam; i++) {
        if (vet[i] >= 0) {
            cont++;
        }
    }

    return cont;
}

float somaNegativos(float vet[], int tam) {
    float soma = 0;

    for (int i = 0; i < tam; i++) {
        if (vet[i] <= 0) { // nao importa o igual pq soma com 0 da zeroKKKK)
            soma += vet[i];
        }
    }

    return soma;
}

int main () {
    const int tamVetor = 10;
    float vetor[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    cout << contaPositivos(vetor, tamVetor) << endl
    << somaNegativos(vetor, tamVetor) << endl;

    return 0;
}