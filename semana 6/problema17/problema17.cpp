//semana 6, ex 17
#include <iostream>
#include <cmath>
using namespace std;

const int divisor = 10;

int contagemDigitos(int num) {
    int nDigitos = 0, aux = num;

    do {
        nDigitos++;
        aux /= divisor;
    } while (aux > 0);

    //diminui em 1 pra poder fazer as potências de base 10!
    return (nDigitos - 1);
}

int calculaReverso(int num) {
    int reverso = 0, aux = 0;
    int nDigitos = contagemDigitos(num);

    //agora é a escrita do reverso!
    while (num > 0) {
        aux = (num % divisor);
        reverso += (aux * pow(10, nDigitos));
        nDigitos--;
        num /= divisor;

    }

    return reverso;
}

int main() {
    int num = 0;

    cin >> num;
    cout << calculaReverso(num) << endl;

    return 0;
}