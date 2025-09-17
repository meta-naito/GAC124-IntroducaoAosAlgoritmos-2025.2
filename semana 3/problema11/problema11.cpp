//semana 3, ex 11
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int hora, minInicial, horaMin, minFinal, segs;

    cin >> hora >> minInicial;

    horaMin = hora * 60;
    minFinal = horaMin + minInicial;
    segs = minFinal * 60;
    
    ofstream saida("saida.txt");
    saida << horaMin << endl << minFinal << endl << segs << endl;
    
    saida.close();
    return 0;
}