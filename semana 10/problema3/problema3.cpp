//semana 10, ex 3
#include <iostream>
#include <fstream>

//preguica de pensar nisso como um int viu KKKKKK
void criaMatrizVendas(int **vendas, int **matriz1, int **matriz2, int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            vendas[i][j] = matriz1[i][j] + matriz2[i][j];            
        }
    }

    return;
}

int calculaMaiorVenda(int **vendas, int linha, int coluna) {
    int maior = vendas[0][0];
    
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (vendas[i][j] > maior) {
                maior = vendas[i][j];
            }
        }
    }

    return maior;
}

int totalLoja(int **matriz1, int **matriz2, int linha, int coluna) {
    int total = 0;

    for (int i = 0; i < linha; i++) {
        total += (matriz1[i][coluna] + matriz2[i][coluna]);
    }
    
    return total;
}

int totalProduto(int **matriz1, int **matriz2, int linha, int coluna) {
    int total = 0;

    for (int j = 0; j < coluna; j++) {
        total += (matriz1[linha][j] + matriz2[linha][j]);
    }
    
    return total;
}

int main() {
    const int linha = 5, coluna =3;

    //alocacao da matriz do primeiro mes
    int **matriz1 = new int*[linha];
        
        for (int i = 0; i < linha; i++) {
            matriz1[i] = new int[coluna];
            }

    //alocacao da matriz do segundo mes
    int **matriz2 = new int*[linha];

        for (int i = 0; i < linha; i++) {
            matriz2[i] = new int[coluna];
        }
    
    std::ifstream entrada("vendas.txt");
    //leitura das matrizes
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            entrada >> matriz1[i][j];
        }
    }
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            entrada >> matriz2[i][j];
        }
    }

    entrada.close();

    //alocacao da matriz das vendas
    int **matrizVendas = new int*[linha];

        for (int i = 0; i < linha; i++) {
            matrizVendas[i] = new int[coluna];
        }

    criaMatrizVendas(matrizVendas, matriz1, matriz2, linha, coluna);

    std::ofstream saida("saida.txt");

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            saida << matrizVendas[i][j] << "    ";
        }
        saida << std::endl;
    }

    saida << calculaMaiorVenda(matrizVendas, linha, coluna) << std::endl;

    for (int j = 0; j < coluna; j++) {
        saida << totalLoja(matriz1, matriz2, linha, j) << " ";
    }

    saida << std::endl; 

    for (int i = 0; i < linha; i++) {
        saida << totalProduto(matriz1, matriz2, i, coluna) << " ";
    }

    //DESALOCAÇÃO DAS MATRIZES (PORQUE TEM QUE SER TÃO FEIO >:[ )
    for (int i = 0; i < linha; i++) {
        delete [] matriz1[i];
    }
    delete [] matriz1;

    for (int i = 0; i < linha; i++) {
        delete [] matriz2[i];
    }
    delete [] matriz2;

    for (int i = 0; i < linha; i++) {
        delete [] matrizVendas[i];
    }
    delete [] matrizVendas;

    return 0;
}