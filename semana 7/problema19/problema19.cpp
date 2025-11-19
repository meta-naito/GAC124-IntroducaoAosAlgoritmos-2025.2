//semana 7, ex 19
#include <iostream>

void leituraVetor(float *vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        std::cin >> vetor[i];
    }

    return;
}

float produtoEscalar(float *vetorA, float *vetorB, int tam) {
    float prodEscalar = 0.0;

    for (int i = 0; i < tam; i++) {
        prodEscalar += (vetorA[i] * vetorB[i]);
    }

    return prodEscalar;
}

int main() {
    const int tamVetor = 5;

    float vetorA[tamVetor] = {};
    leituraVetor(vetorA, tamVetor);

    float vetorB[tamVetor] = {};
    leituraVetor(vetorB, tamVetor);

    std::cout << produtoEscalar(vetorA, vetorB, tamVetor) << std::endl;

    return 0;
}