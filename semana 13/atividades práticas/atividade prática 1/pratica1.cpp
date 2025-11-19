//semana 13, questão prática 1
#include <iostream>

void imprimeVetor(int *vetor, int tam);

void leituraVetor(int *&vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        std::cin >> vetor[i];
    }

    return;
}

void insertionDecres(int *vetor, int tam) {
    int aux, j;
    for (int i = tam - 2; i > -1; i--) {
        aux = vetor[i];
        j = i + 1;

        while (j < tam and vetor[j] > aux) {
            vetor[j-1] = vetor[j];
            j++;
        }
    
        vetor[j-1] = aux;

        imprimeVetor(vetor, tam);
    }
}

void imprimeVetor(int *vetor, int tam) {
    for (int indice = 0; indice < tam; indice++) {
        std::cout << vetor[indice] << " ";
    }
    std::cout << std::endl;

    return;
}

int main() {
    int qNum;
    std::cin >> qNum;

    int *vetor = new int[qNum];
    leituraVetor(vetor, qNum);

    insertionDecres(vetor, qNum);

    delete [] vetor;

    return 0;
}
