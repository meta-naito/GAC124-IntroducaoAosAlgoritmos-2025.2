#include <iostream>
using namespace std;

bool calculaPrimo(int vet[], int indice) {
    bool ePrimo = true;
    int divisor = 2;

    while (divisor <= (vet[indice]/2)) {
        if (vet[indice] % divisor == 0) {
            ePrimo = false;
        }
        divisor++;
    }

    return ePrimo;
}

int main (){
    int vetor[9], indice = 0;

    for (int i = 0; i < 9; i++)
        cin >> vetor[i];

    cout << "escolha um indice: ";
    cin >> indice;

    if (calculaPrimo(vetor, indice) == true) {
        cout << "sim" << endl;
    }
    else {
        cout << "nao :p" << endl;
    }

    return 0;
}
