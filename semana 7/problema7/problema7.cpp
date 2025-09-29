//semana 7, ex 7
#include <iostream>
using namespace std;

// 4 4 5 5 6 2 3 4 3 2 1 2 5 6 5 4 3 2 4 2

float frequenciaLados(int jogadas[], int tam, int lado){
    int qLado = 0;

    //achando quantas vezes um certo lado aparece nas jogadas
    for (int i = 0; i < tam; i++) {
        if (jogadas[i] == lado) {
            qLado++;
        }
    }
    //calculando a frequencia ja no return :p
    return ((float)qLado/20);
}

int main() {
    const int tamVetor = 20;
    int jogadas[tamVetor] = {};

    for (int i = 0; i < tamVetor; i++) {
        cin >> jogadas[i];
    }
    //vai calculando a frequencia de cada lado, comecando pelo 1
    for (int lado = 1; lado <= 6; lado++) {
        cout << lado << ": " << frequenciaLados(jogadas, tamVetor, lado) << endl;
    }

    return 0;
}