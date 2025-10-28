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

    leitura(vetor1, qNum);
    leitura(vetor2, qNum);
    
    bool iguais = true;
    int indiceVet1 = 0, indiceVet2 = 0;

    while ((indiceVet1 < qNum) and (iguais == true)) {
        indiceVet2 = 0;

        if (vetor1[indiceVet1] != vetor2[indiceVet2]) {
            iguais = false;
        }

        else {
            indiceVet2++;
            if (indiceVet2 < qNum) {
                indiceVet1++;
            }
        }
    }

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