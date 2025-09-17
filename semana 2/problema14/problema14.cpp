//semana 2 de Ialg, ex 14
#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
    float base, altura, area;
    ifstream entrada("triangulo.txt");
    entrada >> base >> altura;

    area = ((base*altura)/2);

    ofstream saida("saida.txt");
    saida << area;
    saida.close();

    return 0;
}