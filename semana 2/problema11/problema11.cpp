//semana 2 de Ialg, ex 11
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main ()
{
    float real, dolar, euro, libra;

    cin >> real;
    dolar = real/2.13;
    euro = real/2.84;
    libra = real/3.34;

    ofstream arquivo ("salario.txt");
    arquivo << setprecision(2) << fixed << dolar << endl << euro << endl << libra << endl;
    arquivo.close();
    /* fixed dps do setprecision do iomanip aparentemente só deixa os DECIMAIS com o limite
    nesse caso, precisava ser só dois por conta que é dinheiro, se fosse setprecision(2) APENAS,
    iria ser só dois numeros que apareceriam :p */
    return 0;
}
