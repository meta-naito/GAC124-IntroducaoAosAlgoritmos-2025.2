//semana 3, ex 16
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    float valor, vista, parcela4, parcela10;

    ifstream entrada("valor.txt");
        entrada >> valor;

    vista = valor * 0.92;
    parcela4 = valor / 4;
    parcela10 = (valor*1.10) / 10;

    ofstream saida("opcoes.txt");
        saida << setprecision(2) << fixed <<
        vista << endl << parcela4 << endl << parcela10 << endl;

    return 0;
}