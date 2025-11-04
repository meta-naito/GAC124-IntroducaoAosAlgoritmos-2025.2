//semana 10, ex 15
#include <iostream>

int buscaBinaria(int *vetor, int posInicial, int posFinal, int procurado) {
    int meio = (posInicial + posFinal) / 2;

    if (procurado == vetor[meio]) {
        return meio;
    }

    else if (posInicial < posFinal) {
        if (procurado > vetor[meio]) { //como ta em ordem decrescente, se for menor desconsidera o lado esquerdo do vetor!
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

void imprimeVetor(int *vetor, int tam, int valorMult, int procurado) {
    int posInicial = 0, posFinal = (tam - 1);
    int posProcurado = buscaBinaria(vetor, posInicial, posFinal, procurado);

    //nao precisa de ter uma comparacao para o posProcurado se ele for -1 (nao ter achado o numero)
    //pq aí o if nunca é acionado e só da cout no vetor normal!
    for (int i = 0; i < tam; i++) {
        if (i == posProcurado) {
            vetor[i] *= valorMult;
        }
        std::cout << vetor[i] << " ";
    }
    
    return;
}

int main() {
    int tamVetor = 0;

    std::cin >> tamVetor;

    int *vetor = new int[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        std::cin >> vetor[i];
    }

    int numProcurado = 0, vMultiplicacao = 0;

    std::cin >> numProcurado >> vMultiplicacao;

    imprimeVetor(vetor, tamVetor, vMultiplicacao, numProcurado);

    return 0;
}