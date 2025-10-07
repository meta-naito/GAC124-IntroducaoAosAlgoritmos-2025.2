//semana 5, ex 17
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

float media(float valor, int i) {
    return (valor / i);
}

int main() {
    float salario = 0;
    int nFilhos = 0;

    ifstream entrada("entrada");

    float qSalario = 0.0, porcentagem = 0.0, maior = 0.0;
    int qFilhos = 0, i = 0;
    
    while (entrada >> salario >> nFilhos) {
        qSalario += salario;
        qFilhos += nFilhos;
        i++; //conta quantos habitantes ja passaram pro calculo da media depois

        //calculo do maior
        if (salario > maior) {
            maior = salario;
        }

        //calculo da porcentagem
        if (salario <= 1000.00) {
        porcentagem++;
        }
    }

    cout << fixed << setprecision(2) << media(qSalario, i) << endl << media(qFilhos, i) << endl
    << maior << endl << (porcentagem / i) << endl;

    return 0;
}