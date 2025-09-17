//semana 2 de Ialg, ex 13
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main ()
{
    float valorInicial, valorFinal;
    
    ifstream entrada("entrada.txt");
 
    entrada >> valorInicial;
    valorFinal = valorInicial-(valorInicial*0.09);

    cout << "R$ " << fixed << setprecision(1) << valorFinal;
    entrada.close();
    return 0;
}