//semana 7, ex 14
#include <iostream>
#include <iomanip>
using namespace std;

void calculaSomaN(int vet[], int tam, int soma) {
    
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