//semana 7, ex 10
#include <iostream>
using namespace std;

int calcMaior(int vet[], int tam) {
    int maior = vet[0];
    
    for (int i = 0; i < tam; i++) {
        if (vet[i] > maior)
            maior = vet[i];
    }

    return maior;
}

void divisao(int vet[], int tam, int maior) {
    for (int i = 0; i < tam; i++)
        vet[i] /= maior;
}

int main () {
    const int tamVetor = 15;
    int vetor[tamVetor];

    for (int i = 0; i < tamVetor; i++)
        cin >> vetor[i];
    
    int maior = calcMaior(vetor, tamVetor);
    
    divisao(vetor, tamVetor, maior);
    
    for (int i = 0; i < tamVetor; i++)
        cout << vetor[i] << " ";
        
    cout << endl;

    return 0;
}
