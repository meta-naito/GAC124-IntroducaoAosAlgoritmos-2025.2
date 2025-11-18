//semana 8, ex 3
#include <iostream>

void leituraVetor(int *&vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        std::cin >> vetor[i];
    }

    return;
}

bool calculaMultiplo(int *vetor, int indice, int multiplo) {
    return (vetor[indice] % multiplo == 0);
}

void imprimeMultiplos(int *vetor, int tam, int multiplo) {
    int cont = 0; 
    
    for (int i = 0; i < tam; i++) {
        if (calculaMultiplo(vetor, i, multiplo)) { //se for true, nn é recomendado especificar nesse caso que é true
            std::cout << vetor[i] << " ";
            cont++;
        }
    }

    if (cont == 0) { //se nao tiver nenhum multiplo, ja que cont nn for incrementado
        std::cout << 0 << std::endl;
    }
    else {
        std::cout << std::endl;
    }
    
    return;
}

int main() {
    int qNum = 0;
    std::cin >> qNum;

    int *vetor = new int[qNum];
    leituraVetor(vetor, qNum);

    imprimeMultiplos(vetor, qNum, 2);
    imprimeMultiplos(vetor, qNum, 3);
    imprimeMultiplos(vetor, qNum, 6);

    delete [] vetor;

    return 0;
}