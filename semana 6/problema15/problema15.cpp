//semana 6, ex 15
#include <iostream>
using namespace std;


int calculaSimplificacao(int& num) {
    int aux = 2;

    while (num >= 1) {
        if (num % aux == 0) {
            num /= aux;
        }
        aux++;
    }

    return num;
}

int main () {
    int numerador, denominador;
    cin >> numerador >> denominador;

    cout << calculaSimplificacao(numerador);//<< endl << calculaSimplificacao(denominador) << endl;


    return 0;
}