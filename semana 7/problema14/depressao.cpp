//semana 7, ex 14 SE O VETOR FOSSE ORDENADO :(
#include <iostream>
#include <iomanip>
using namespace std;

void calculaSomaN(int vet[], int tam, int soma) {
    int i = 0, j = 1, k = 2;
    int indiceFinal = (tam - 3); //tam - 3 = 4
    int somaNum = 0;
    
    while ((i <= indiceFinal) and (somaNum != soma)) {
        somaNum = (vet[i] + vet[j] + vet[k]);

        if (somaNum == soma) {
            cout << vet[i] << " " << vet[j] << " " << vet[k] << endl;
        }

        i++;
        j++;
        k++;
    }

    if (i > indiceFinal) {
        cout << -1 << endl;
    }
}

int main() {
    const int tamVetor = 7;
    int vetor[tamVetor] = {}, somaN = 0;

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    cin >> somaN;

    calculaSomaN(vetor, tamVetor, somaN);

    return 0;
}