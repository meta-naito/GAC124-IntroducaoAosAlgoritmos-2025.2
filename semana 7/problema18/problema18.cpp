//semana 7, ex 18
#include <iostream>

void leituraVetor(int *vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        std::cin >> vetor[i];
    }

    return;
}

int calculaMenor(int *vetor, int tam) {
    int menor = vetor[0];

    for (int i = 1; i < tam; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    return menor;
}

int calculaMaior(int *vetor, int tam) {
    int maior = vetor[0];

    for (int i = 1; i < tam; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

int encontraPosicao(int *vetor, int tam, int num) {
    int pos = 0;
    bool jaAchou = false;

    for (int i = 0; i < tam; i++) {
        if (vetor[i] == num and !jaAchou) { //se jaAchou == true, entao nao precisa de mudar a posicao do menor/maior!
            pos = i;
            jaAchou = true;
        }
    }

    return pos;
}

int main() {
    const int tamVetor = 10;
    int vetor[tamVetor];

    leituraVetor(vetor, tamVetor);

    int menor = calculaMenor(vetor, tamVetor);
    int maior = calculaMaior(vetor, tamVetor);

    std::cout << maior << " " << encontraPosicao(vetor, tamVetor, maior) << std::endl;
    std::cout << menor << " " << encontraPosicao(vetor, tamVetor, menor) << std::endl;

    return 0;
}