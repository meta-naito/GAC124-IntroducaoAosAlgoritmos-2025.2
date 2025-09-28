//semana 7, ex 3
#include <iostream>
using namespace std;

void calculaMultiplo (int vet[], int tam, int multiplo) {
    int vetorMultiplo[tam] = {};
    int j = 0;
    
    for (int i = 0; i < tam; i++) {//varrendo o vetor uhul
        if (vet[i] % multiplo == 0) { //se o numero for multiplo de 2 ou 3
            vetorMultiplo[j] = vet[i]; // tem que colocar esse numero no outro vetor
            
            cout << vetorMultiplo[j] << " ";
            j++; //aumenta a posicao do vetor multiplo em 1
        }
    }
}

int calculaMaior (int vetMultiplo[], int tam) {
    int maior = vetMultiplo[0]; //so to colocando j pra indicar que é o vetorMultiplo que eu to falando

    for (int j = 0; j < tam; j++) {
        if (vetMultiplo[j] > maior) {
            maior = vetMultiplo[j];
        }
    }
    return maior;
}

int main () {
    const int tamVetor = 10;
    int vetorPrincipal[tamVetor];
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetorPrincipal[i];
    }

    calculaMultiplo(vetorPrincipal, tamVetor, 2);
    cout << endl << calculaMaior(vetorPrincipal, tamVetor) << endl;

    calculaMultiplo(vetorPrincipal, tamVetor, 3);
    cout << endl << calculaMaior(vetorPrincipal, tamVetor) << endl;


    return 0;
}