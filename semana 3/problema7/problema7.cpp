//semana 3, ex 7
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main()
{
    string arq1, arq2, arqSaida, texto1, texto2;
    
    cin >> arq1 >> arq2 >> arqSaida;

    ifstream entrada1(arq1);
        entrada1 >> texto1;

    ifstream entrada2(arq2);
        entrada2 >> texto2;
    
    ofstream saida(arqSaida);
        saida << texto1 << " " << texto2;
    saida.close();

    return 0;
}