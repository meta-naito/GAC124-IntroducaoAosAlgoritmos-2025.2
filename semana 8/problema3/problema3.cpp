//semana 8, ex 3
#include <iostream>
using namespace std;

void leituraVetor(int *&vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }

    return;
}

int main() {
    int qNum = 0;
    cin >> qNum;

    int *vetor = new int[qNum];
    leituraVetor(vetor, qNum);

    for (int i = 0; i < qNum; i++) {
        if (vetor[i] % 2 == 0) {
            cout << vetor[i] << " ";
        }
    }

    delete [] vetor;

    return 0;
}