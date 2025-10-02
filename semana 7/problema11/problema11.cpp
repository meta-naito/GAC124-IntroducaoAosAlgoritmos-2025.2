//semana 7, ex 11
#include <iostream>
using namespace std;

//Vetor A: 
// 10   5   6   7   8   9   4   3   2   1
//Vetor B: 
// 5   4   9   6   8   7   1   3   2   10

void calculaVetorC (float vetA[], float vetB[], int tam) {
    float vetorC[tam];
    int posA = 0, posB = tam - 1, i = 0; //posicao do vetor A é o começo
    //já a posiçao do vetor B é o tamanho do vetor menos 1 pra dar realmente o ultimo elemento
    
    while (posA < tam) { //nao precisa de ter tb uma comparação com o vetor B!!
        //a media do elemento do vetor A e do vetor B
        vetorC[i] = ((vetA[posA] + vetB[posB]) / 2);
        
        cout << vetorC[i] << endl;
        //aumenta o indice em C, a posiçao dos elementos de A, e diminui a de B
        i++;
        posA++;
        posB--;
    }
}

float calculaMaior(float vetor[], int tam) {
    float maior = vetor[0];

    for (int i = 0; i < tam; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

float calculaSegundoMaior(float vetor[], int tam) {
    bool vetorAux[tam] = {true, true, true, true, true, true, true, true, true, true};
    float maior = calculaMaior(vetor, tam);
    
    for (int i = 0; i < tam; i++) {
        if (vetor[i] == maior) {
            vetorAux[i] = false;
        }
    }

    float segMaior = vetor[0];
    
    //caso o maior elemento seja o primeiro elemento do vetor
    if (vetor[0] == maior) {
        segMaior = vetor[1];
    }

    for (int i = 0; i < tam; i++) {
        //enquanto o vetorAux for verdadeiro, ou seja, nao for o elemento maior
        if (vetorAux[i] == true) {
            //continua aqui a mesma coisa de achar o maior, mas o segundo maior é o "maior" nesse caso
            if (vetor[i] > segMaior) {
                segMaior = vetor[i];
            }
        }
    }

    return segMaior;
}

int main() {
    const int tamVetor = 10;
    float vetorA[tamVetor], vetorB[tamVetor];
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetorA[i];
    }
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetorB[i];
    }
    
    calculaVetorC(vetorA, vetorB, tamVetor); //o cout desse está na função, ja que ela é do tipo void

    //vetor A
    cout << calculaMaior(vetorA, tamVetor) << endl << calculaSegundoMaior(vetorA, tamVetor) << endl;
    //vetor B
    cout << calculaMaior(vetorB, tamVetor) << endl << calculaSegundoMaior(vetorB, tamVetor) << endl;
    
    return 0;
}
