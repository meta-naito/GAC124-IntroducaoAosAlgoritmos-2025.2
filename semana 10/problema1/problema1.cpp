//semana 10, ex 1
#include <iostream>

struct localBomba {
    int linha, coluna;
} bombas;

void lerMatriz(int **matriz, int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            std::cin >> matriz[i][j];
        }
    }

    return;
}

std::string embarcacaoAtingida(int *posBombas, int qBombas, int i) {
    std::string nomeEmbarcacao = "";

    if (posBombas[i] == 1) {
        nomeEmbarcacao = "destroier";
    }

    else if (posBombas[i] == 2) {
        nomeEmbarcacao = "fragata";
    }

    else if (posBombas[i] == 3) {
        nomeEmbarcacao = "lancha";
    }
    
    else {
        nomeEmbarcacao = "agua";
    }


    return nomeEmbarcacao;
}

int main() {
    const int tamMatriz = 15, qBombas = 3;

    //alocando dinamicamente essa porrinha de matriz KKKK
    int **matriz = new int*[tamMatriz];

    for (int i = 0; i < tamMatriz; i++) {
        matriz[i] = new int[tamMatriz];
    }

    //entrada das embarcações
    lerMatriz(matriz, tamMatriz);

    int *posicaoBombas = new int[qBombas];
    
    //entrada das bombas
    for (int i = 0; i < qBombas; i++) {
        std::cin >> bombas.linha >> bombas.coluna;
        posicaoBombas[i] = matriz[bombas.linha][bombas.coluna];
    }


    for (int i = 0; i < qBombas; i++) {
        std::cout << embarcacaoAtingida(posicaoBombas, qBombas, i) << std::endl;
    }
    
    //deletando a matriz em si
    for (int i = 0; i < tamMatriz; i++) {
        delete [] matriz[i];
    }
    delete [] matriz;

    //deletando as bombas
    delete [] posicaoBombas;

    return 0;
}