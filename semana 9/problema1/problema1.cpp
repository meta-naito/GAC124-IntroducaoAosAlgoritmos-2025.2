#include <iostream>
#include <string>

using namespace std;
typedef string str;

int main() {
    int tamMatriz = 0;
    const int tamSub = 2;
    
    cin >> tamMatriz;
    
    char matriz[tamMatriz][tamMatriz] = {};

    for (int i = 0; i < tamMatriz; i++){
        for (int j = 0; i < tamMatriz; j++) {
            cin >> matriz[i][j];
        }
    }
    
    char subMatriz[tamSub][tamSub];
    
    for (int i = 0; i < tamSub; i++){
        for (int j = 0; i < tamSub; j++) {
            subMatriz[i][j] = matriz[i][j];
            cout << subMatriz[1][j] << " ";
        }
    

    }

    

    return 0;
}