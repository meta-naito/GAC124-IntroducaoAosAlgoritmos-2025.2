//semana 7, ex 11
#include <iostream>
using namespace std;

void calculaVetorC (float vetA[], float vetB[], int tam) {
    float vetorC[tam];
    int posA = 0, posB = tam - 1, i = 0;
    
    while (posA < tam) {
        
        vetorC[i] = ((vetA[posA] + vetB[posB]) / 2);
        
        cout << vetorC[i] << endl;
        
        i++;
        posA++;
        posB--;
    }
}

int main() {
    const int tamVetor = 10;
    float vetorA[tamVetor], vetorB[tamVetor], vetorC[tamVetor];
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetorA[i];
    }
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetorB[i];
    }
    
    calculaVetorC(vetorA, vetorB, tamVetor);
    
    //media do primeiro numero de a e o ultimo de b, e assim por diante
    
    return 0;
}
