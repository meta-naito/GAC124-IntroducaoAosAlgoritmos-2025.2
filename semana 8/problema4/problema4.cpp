//semana 8, ex 4
#include <iostream>

//nao faço ideia de como criar funções pra isso tudoKKKK entao vai ficar asism por enquanto!

void leituraVetor(int *&vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        std::cin >> vetor[i];
    }

    return;
}

int main() {
    int qNum;
    std::cin >> qNum;

    int *vetor = new int[qNum];
    leituraVetor(vetor, qNum);
    
    const int tamLimite = 2;

    int *limites = new int[tamLimite];
    leituraVetor(limites, tamLimite);

    int iLimite;
    for (int l = 0; l < tamLimite; l++) { //pra checar os indices desses numeros, melhor fazer o loop externo ser o do vetor dos limites
        for (int i = 0; i < qNum; i++) {
            if (vetor[i] == limites[l]) {
                iLimite = i; //nao precisa mais dos numeros, apenas dos indices pra impressão!
            }
        }
        limites[l] = iLimite;
    }

    int posInicial = 0, posFinal = 1, aux = limites[posInicial];
    
    //checa se o indice do primeiro limite é menor do que o outro
    //se for, inverte para que os indices fiquem crescentes e o próximo passo consiga ser feito
    if (limites[posFinal] < aux) {
        aux = limites[posFinal];
        limites[posFinal] = limites[posInicial];
        limites[posInicial] = aux;
    }

    int iInicial = limites[posInicial], iFinal = limites[posFinal];
    while (iFinal > iInicial + 1) {
        std::cout << vetor[iFinal - 1] << " ";
        iFinal--;   
    }

    std::cout << std::endl;

    delete [] vetor;
    delete [] limites;

    return 0;
}