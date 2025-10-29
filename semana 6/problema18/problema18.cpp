//semana 6, ex 18
#include <iostream>
using namespace std;

void fazerPiramide(int tamanho) {
    int coluna = 1;

    while (coluna <= tamanho) {
        int linha = 1;

        while (linha <= coluna) {
            if (linha % 2 == 0) {
                cout << '#';
            }

            else {
                cout << '@';
            }
            linha++;
        }
        cout << endl;
    
        coluna++;
    }

    return;
}

int main() {
    int tamanho = 0;

    cin >> tamanho;
    fazerPiramide(tamanho);
        
    return 0;
}