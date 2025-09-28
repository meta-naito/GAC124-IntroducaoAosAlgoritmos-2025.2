//semana 7, ex 1
#include <iostream>
#include <iomanip>
using namespace std;

//25 26.8 32 27.5 26.5 28.1 24

double mediaTemp(double vet[], int tam) {
    double soma = 0;

    for (int i = 0; i < tam; i++) {
        soma += vet[i];
    }
    
    double media = soma/tam;

    return media;
}

int acimaMedia (double vet[], int tam) {
    int diasAcima = 0;

    for (int i = 0; i < tam; i++)  {
        if (vet[i] > mediaTemp(vet, tam)) {
            diasAcima++;
        }
    }

    return diasAcima;
}

double maiorTemp (double vet[], int tam) {
    double maior = vet[0];

    for (int i = 0; i < tam; i++)  {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    return maior;
}

int main () {
    const int tamVetor = 7;
    double vetor[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }

    cout << fixed << setprecision(1) << mediaTemp(vetor, tamVetor) << endl <<
    acimaMedia(vetor, tamVetor) << endl << maiorTemp(vetor, tamVetor) << endl;

    return 0;
}