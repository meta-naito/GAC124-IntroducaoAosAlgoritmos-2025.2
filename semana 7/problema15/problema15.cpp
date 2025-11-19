//semana 7, ex 15
#include <iostream>

//POR FAVOR, RELEVE QUE ISSO DEVE ESTAR MUITO MAL OTIMIZADO!!! nao consegui pensar em outra soluçãoKKKK

void leituraVetor(int *vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        std::cin >> vetor[i];
    }

    return;
}

int contaIguais(int *vetorA, int *vetorB, int tamVetor) {
    int iguais = 0;
    for (int a = 0; a < tamVetor; a++) {
        for (int b = 0; b < tamVetor; b++) {
            if (vetorA[a] == vetorB[b]) {
                iguais++;
            }
        }
    }

    return iguais;
}

//acho que esse nome nao está mto bom, depois troca KKKK
bool checaIguais (int *vetorA, const int tam, int num) {
    for (int a = 0; a < tam; a++) {
        if (vetorA[a] == num) {
            return true;
        }
    }
    return false;
}

void imprimeUniao(int *vetorA, int *vetorB, const int tamVetor) {
    //conta a quantidade de números iguais para ver quantos elementos o vetor C deve ter
    int qIguais = contaIguais(vetorA, vetorB, tamVetor);

    const int tamC = (tamVetor * 2) - qIguais; //quantidade real dos elementos em C
    int vetorC[tamC] = {};

    //pega todos os elementos de A
    for (int i = 0; i < tamVetor; i++) {
        vetorC[i] = vetorA[i];
    }
    
    int posB = 0, posC = tamVetor;
    
    //agora checa se tem elementos iguais em B
    //se tiver, ele só ignora e passa para o outro kk
    while (posC < tamC) {
        if (!checaIguais(vetorA, tamVetor, vetorB[posB])) {
            vetorC[posC] = vetorB[posB];
            posC++;
        }
        posB++;
    }

    //agora sim, impressão do vetor C !!
    for (int i = 0; i < tamC; i++) {
        std::cout << vetorC[i] << " ";
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
    
    imprimeUniao(vetorA, vetorB, tamVetor);
    
    return 0;
}
