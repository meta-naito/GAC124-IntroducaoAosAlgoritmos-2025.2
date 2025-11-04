#include <iostream>
#include <string>

int main() {
    const int tamSub = 2;
    int tamMatriz = 0;

    std::cin >> tamMatriz;

    //alocando a matriz principal
    char **matriz = new char*[tamMatriz];
    for (int i = 0; i < tamMatriz; i++) {
        matriz[i] = new char[tamMatriz];
    }
    
    for (int i = 0; i < tamMatriz; i++){
        for (int j = 0; i < tamMatriz; j++) {
            std::cin >> matriz[i][j];
        }
    }
    

    return 0;
}