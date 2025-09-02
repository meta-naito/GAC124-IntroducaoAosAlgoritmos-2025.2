//semana 2 de Ialg, ex 9
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main ()
{
    float altura, largura, area, litros;
    
    cin >> largura >> altura;
    area = (largura*altura)/2;
    litros = 3*area;

    cout << setprecision(2) << fixed << litros  << " Litros" << endl;
    return 0;
}