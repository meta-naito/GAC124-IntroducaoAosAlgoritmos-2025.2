//semana 6, ex 4
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float inclinacao (int h, int b) {
    float inclinacao = 0.0;
    
    if (b == 0)
        return 0;

    inclinacao = (((float)h * 100) / b);

    return inclinacao;
}

int main () {
    int rampas = 0, base = 0, altura = 0, rampasCertas = 0;
    const float erro = 0.00001;
    float inclinacaoFoda = 0;

    cin >> rampas;

    //a altura e base das rampas ditas
    for (; rampas > 0; rampas--) {
        cin >> altura >> base;

        inclinacaoFoda = inclinacao(altura, base);

        if ((inclinacaoFoda < 8) or (abs(8 - inclinacaoFoda) <= erro)) {
            rampasCertas++;
        }

        cout << fixed << setprecision(1) << inclinacaoFoda << endl;
    }
    
    cout << rampasCertas << endl;

    return 0;
}