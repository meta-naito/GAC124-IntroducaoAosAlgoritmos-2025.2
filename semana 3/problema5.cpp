//semana 3, ex 5
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int nota1, peso1, nota2, peso2, nota3, peso3;
    float notaFinal;

    ifstream entrada("notas.txt");
    entrada >> nota1 >> peso1 >> nota2 >> peso2 >> nota3 >> peso3;

    notaFinal = (float) ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);

    ofstream saida("final.txt");
    saida << setprecision(2) << fixed << notaFinal << endl;

	return 0;
}