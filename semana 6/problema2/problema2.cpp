//semana 6, ex 2
#include <iostream>
using namespace std;

void calcSequencia(int& valor) {
    int cont = 1;
    cout << valor << " ";

    while (valor > 1) {
        if (valor % 2 == 0) {
            valor = valor / 2;
        }
        else {
            valor = valor * 3 + 1;
        }
        
        cout << valor << " ";
        cont++;
    }
    cout << endl << cont << endl;
}

int main () {
    int num;

    cin >> num;

    calcSequencia(num);

    return 0;
}