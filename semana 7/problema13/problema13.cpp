//semana 7, ex 13
#include <iostream>
using namespace std;

float calculaFrequencia(int vet[], int tam, int nota) {
    int qVezes = 0;

    for (int i = 0; i < tam; i++) {
        if (vet[i] == nota) {
            qVezes++;
        }
    }

    return ((float)qVezes/tam);
}

int main() {
    const int tamVetor = 9;
    int vetor[tamVetor] = {};

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    for (int nota = 5; nota >= 1; nota--) {
        cout << nota << ": " << calculaFrequencia(vetor, tamVetor, nota) << endl;
    }

    return 0;   
}