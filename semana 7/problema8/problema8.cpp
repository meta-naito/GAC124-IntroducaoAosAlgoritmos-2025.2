//semana 7, ex 8
#include <iostream>
using namespace std;

//dps de 10 refeicoes, a 11 é gratis
//ou sejaaaa, ve a quantidade de multiplos de 11 eeee tira isso do resultado final!

void promocao(string nome[], int quantidade[], int tam) { 
    int refeicoesNaoPagas = 0;
   
    for (int i = 0; i < tam; i++) { //varrendo o vetoooooor
        refeicoesNaoPagas = quantidade[i] / 11;
        quantidade[i] -= refeicoesNaoPagas;
        cout << nome[i] << " " << quantidade[i] << endl;
    }
}

int main() {
    const int tamVetor = 10;
    string nomes[tamVetor] = {};
    int qRefeicoes[tamVetor] = {};
    
    for (int i = 0; i < tamVetor; i++) {
        cin >> nomes[i];
    }
    
   for (int i = 0; i < tamVetor; i++) {
        cin >> qRefeicoes[i];
    }

    promocao(nomes, qRefeicoes, tamVetor);

    return 0;
}
