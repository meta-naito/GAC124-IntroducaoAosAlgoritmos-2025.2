//semana 7, ex 16
#include <iostream>

void leituraVetor(int *vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        std::cin >> vetor[i];
    }

    return;
}

void imprimeIntersecao(int *vetorA, int *vetorB, int tamVetor) {
    int vetorC[tamVetor] = {};
    int posC = 0;

    //loop externo pra passar pelo vetor A
    for (int i = 0; i < tamVetor; i++) {
        //loop interno pra checar todos os numeros do vetor B pra fazer a interseção
        for (int j = 0; j < tamVetor; j++) {
            if (vetorA[i] == vetorB[j]) {
                vetorC[posC] = vetorA[i];
                posC++;
            }
        }
    }

    //se posC for igual a zero,
    //implica que nao houve um momento onde o if foi ativado, ou seja, nao tem interseção!
    if (posC == 0) {
        std::cout << "VAZIO";
    }

    else {
        for (int i = 0; i < posC; i++) {
            std::cout << vetorC[i] << " ";
        }
    }

    std::cout << std::endl;

    return;
}

int main() {
    const int tamVetor = 5;

    int vetorA[tamVetor] = {};
    leituraVetor(vetorA, tamVetor);

    int vetorB[tamVetor] = {};
    leituraVetor(vetorB, tamVetor);

    imprimeIntersecao(vetorA, vetorB, tamVetor);

    return 0;
}