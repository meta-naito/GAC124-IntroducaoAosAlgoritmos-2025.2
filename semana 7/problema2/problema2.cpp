//semana 7, ex 2
#include <iostream>
using namespace std;

bool ataqueMagico (int vida[], int tam, int& derrotados) {
    int dAnterior = derrotados;

    for (int i = 0; i < tam; i++) {
        vida[i] -= 1;
    
        if (vida[i] == 0) {
            derrotados++;
        }
    }

    if (dAnterior < derrotados) {
        return true;
    }

    else {
        return false;
    }
}

int main () {
    const int tamVetor = 10;
    int vetorVidas[tamVetor] = {}, derrotados = 0;
    bool ataque = true;

    for (int i = 0; i < tamVetor; i++) {
        cin >> vetorVidas[i];
    }

    while (ataque) {
        ataque = ataqueMagico(vetorVidas, tamVetor, derrotados);
    }

    cout << derrotados << endl;

    return 0;
}