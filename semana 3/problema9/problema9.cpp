//semana 3, ex 9
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    const float W = 18;
    float dimensao1, dimensao2, area, eApotenciaNaoTemComo;
    
    cin >> dimensao1 >> dimensao2;

    area = dimensao1*dimensao2;
    eApotenciaNaoTemComo = area*W;

    ofstream saida("potencia.txt");
    saida << setprecision(1) << fixed << area << "m2" << endl << eApotenciaNaoTemComo << "W";

    saida.close();
    return 0;
}