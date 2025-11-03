//semana 10, ex 14
#include <iostream>

//8 7 5 4 2 2
//5

int buscaBinaria(int *vetor, int posInicial, int posFinal, int procurado) {
    int meio = (posInicial + posFinal) / 2;

    if (procurado == vetor[meio]) {
        return meio;
    }

    else if (posInicial < posFinal) {
        if (procurado < vetor[meio]) { //como ta em ordem decrescente, se for menor desconsidera o lado esquerdo do vetor!
            return buscaBinaria(vetor, (meio + 1), posFinal, procurado);
        }
        
        else {
            return buscaBinaria(vetor, posInicial, (meio - 1), procurado);
        }
    }

    else {
        return -1;
    }
}


int main() {
    int tamVetor = 0;

    std::cin >> tamVetor;

    int *vetor = new int[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        std::cin >> vetor[i];
    }

    int numProcurado = 0, posInicial = 0, posFinal = (tamVetor - 1);

    std::cin >> numProcurado;

    std::cout << buscaBinaria(vetor, posInicial, posFinal, numProcurado) << std::endl;

    delete [] vetor;

    return 0;
}