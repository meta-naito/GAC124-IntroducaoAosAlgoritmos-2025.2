//semana 8, ex 2
#include <iostream>
using namespace std;

void leitura(int vetor[], int tamVetor) {
    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
}

int main() {
    int qNum = 0;

    cin >> qNum;

    int *vetor1 = new int[qNum];
    int *vetor2 = new int[qNum];

    for (int i = 0; i < qNum; i++) {
        cin >> vetor1[i];
    }

    for (int i = 0; i < qNum; i++) {
        cin >> vetor2[i];
    }
        
    bool iguais = false;
    int indiceVet1 = 0, indiceVet2 = 0;

    //fazer uma condicao pra caso passar o vetor2 todo e nao tiver um numero igual ao que ta no indice do vetor1, iguais vira falso e cai na parte de DIFERENTES
    




    if (iguais == true) {
        cout << "IGUAIS" << endl;
    }

    else {
        cout << "DIFERENTES" << endl;
    }

    delete [] vetor1;
    delete [] vetor2;

    return 0;
}