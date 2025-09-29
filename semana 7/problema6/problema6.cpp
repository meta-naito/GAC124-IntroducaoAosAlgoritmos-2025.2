//semana 7, ex 6
#include <iostream>
using namespace std;

bool calculaPrimo(int vet[], int indice) {
    bool ePrimo = true;
    int i = 2;

    while (i <= (vet[indice]/2)) {        
        if (vet[indice] % i == 0) {
            ePrimo = false;
        }
        
        i++;
    }
    return ePrimo;
}

int main () {
    const int tamVetor = 9;
    int vetor[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
        
        if (calculaPrimo(vetor, i) == true) {
            cout << vetor[i] << " " << i << endl;
        }
    }

    return 0;
}
