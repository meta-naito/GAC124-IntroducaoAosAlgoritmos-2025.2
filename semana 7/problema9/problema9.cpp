//semana 7, ex 9
#include <iostream>
using namespace std;

int calculaMenor(int vet[], int tam) {
    int menor = 0;
    //inicialização do menor, para que ele não fique igual a -1
    for (int i = 0; i < tam; i++) {
        if (vet[i] >= 0) {
            menor = vet[i];

        }
    }
    //procura do menor mesmo
    for (int i = 0; i < tam; i++) {
        if ((vet[i] >= 0) and (vet[i] < menor)) {
            menor = vet[i];
        }
    }

    return menor;
}

void subsOrdenada(int vet[], int tam) {
    int menor = calculaMenor(vet, tam);

    for (int i = 0; i < tam; i++) {
        if (vet[i] == menor) {
            vet[i] = -1;
        }
        cout << vet[i] << " ";
    }
}

int main() {
    const int tamVetor = 5;
    int vetor[tamVetor] = {}, aux = 0, i = 0;

    while (i < tamVetor) {
        cin >> aux;
        //checagem da entrada: se ela for negativa não entra como um número no vetor :)
        if (aux >= 0) {
            vetor[i] = aux;
            i++;
        }
    }
    //as iterações pra mostrar o vetor transformado; sao 5 pq são 5 números no vetor para mudar
    for (int iteracoes = 1; iteracoes <= tamVetor; iteracoes++) {
        subsOrdenada(vetor, tamVetor);
        cout << endl;
    }

    return 0;
}