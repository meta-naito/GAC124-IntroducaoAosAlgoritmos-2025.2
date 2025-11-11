//semana 8, ex 2
#include <iostream>

//preeeeeguiçaaaaa KKKKK
void leituraVetor(int *&vetor, int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        std::cin >> vetor[i];
    }

    return;
}

int contaIguais(int *vetor1, int *vetor2, int tam) {
    int qIguais = 0;

    //conta quantos numeros iguais tem nos vetores
    for (int iVet1 = 0; iVet1 < tam; iVet1++) {
        for (int iVet2 = 0; iVet2 < tam; iVet2++) {
            if (vetor1[iVet1] == vetor2[iVet2]) {
                qIguais++;
            }
        }
    }

    return qIguais;
}

int main() {
    int qNum = 0;
    std::cin >> qNum;

    int *vetor1 = new int[qNum];
    leituraVetor(vetor1, qNum);

    int *vetor2 = new int[qNum];
    leituraVetor(vetor2, qNum);

    //se contaIguais for igual ao tamanho do vetor (quantidade de numeros), implica que todos os numeros do vetor são iguais pela funcao
    if (contaIguais(vetor1, vetor2, qNum) == qNum) {
        std::cout << "IGUAIS" << std::endl;
    }

    else {
        std::cout << "DIFERENTES" << std::endl;
    }

    delete [] vetor1;
    delete [] vetor2;

    return 0;
}