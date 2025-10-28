//semana 8, ex 1
#include <iostream>
using namespace std;
//ponteiro o nome só é o endereço
//fazer * indica que vc quer saber oq ta dentro do espaço de memoria que o ponteiro aponta

//p variavel é o contrario, o nome indica mesmo oq tem no endereço de memoria
//saber o endereço mesmo vc usa &


int main() {
    int qNum = 0;
    bool capicua = true;

    cin >> qNum;

    unsigned int *vetor = new unsigned int[qNum];

    for (int i = 0; i < qNum; i++) {
        cin >> vetor[i];
    }

    int indiceFinal = (qNum - 1);

    for (int indiceInicial = 0; indiceInicial < qNum/2 and capicua == true; indiceInicial++) {
        if (vetor[indiceInicial] != vetor[indiceFinal-indiceInicial]) {
            capicua = false;
        }
        else {
            cout << indiceInicial << " " << vetor[indiceInicial] << " "
            << indiceFinal-indiceInicial << " " << vetor[indiceFinal-indiceInicial] << " ";
        }
    }

    if (capicua == true) {
        cout << endl << "sim" << endl;
    }

    else {
        cout << endl << "nao" << endl;
    }

    delete [] vetor;

    return 0;
}