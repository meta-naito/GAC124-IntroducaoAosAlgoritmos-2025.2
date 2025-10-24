//semana 7, ex 3
#include <iostream>
using namespace std;

int calculaMaior(int vetMultiplo[], int tam, int multiplo);

void calculaMultiplo(int vet[], int tam, int multiplo) {
    int vetMultiplo[tam];
    int j = 0;

    for (int i = 0; i < tam; i++) { //varrendo o vetor uhul
        if (vet[i] % multiplo == 0) { //se o numero for multiplo de 2 ou 3
            vetMultiplo[j] = vet[i]; // tem que colocar esse numero no outro vetor
            
            cout << vetMultiplo[j] << " ";
            j++; //aumenta a posicao do vetor multiplo em 1
        }
    }
    cout << endl << calculaMaior(vetMultiplo, j, multiplo) << endl;
}

int calculaMaior(int vetMultiplo[], int tam, int multiplo) {
    int maior = vetMultiplo[0]; 

    for (int j = 0; j < tam; j++) { //so to colocando j pra indicar que é o vetMultiplo que eu to falando
        if ((vetMultiplo[j] > maior) and (vetMultiplo[j] % multiplo == 0)) {
            maior = vetMultiplo[j];
        }
    }
    return maior;
}

int main() {
    const int tamVetor = 10;
    int vetorPrincipal[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetorPrincipal[i];
    }

    calculaMultiplo(vetorPrincipal, tamVetor, 2);

    calculaMultiplo(vetorPrincipal, tamVetor, 3);

    return 0;
}