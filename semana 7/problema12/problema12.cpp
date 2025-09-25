//semana 7, ex 12
#include <iostream>
#include <iomanip>
using namespace std;

float calcSoma(float vet[], int tam) {
    float soma = 0;

    for (int i = 0; i < tam; i++) {
        soma += vet[i];
    }

    return soma;
}


int main () {
    int tamVetor = 16; //NÃO é pra ser constante!!!! precisa de mudar pra fzr a somatoria :)
    int num = 0;
    float vetor[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetor[i];
    }
    
    cin >> num;
    tamVetor = num;

    float somatorio = calcSoma(vetor, tamVetor);

    cout << fixed << setprecision(2) << somatorio << endl;

    return 0;
}