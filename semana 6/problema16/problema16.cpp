//semana 6, ex 16
#include <iostream>
#include <cmath>
using namespace std;

double razaoAurea(int razao, double& phi) {
    double valor = 1.0;

    for (int i = 0; i < razao; i++) {
        valor = sqrt(1 + valor);
    }

    phi = valor;

    return phi;
}

int main() {
    int termoRaiz = 0;
    double phi = 0.0;

    cin >> termoRaiz;
    cout << razaoAurea(termoRaiz, phi) << endl;

    return 0;
}
