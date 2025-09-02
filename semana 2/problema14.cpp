//semana 2 de Ialg, ex 14
#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
    float base, altura, area;
    ifstream entrada("triangulo14.2.txt");
    entrada >> base >> altura;

    area = ((base*altura)/2);

    ofstream saida("saida14.2");
    saida << area;
    saida.close();

    return 0;
}