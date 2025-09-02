//semana 3, ex 6
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	float nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, media;
   
    ifstream entrada("dados6.3.txt");
    entrada >> nota1 >> nota2 >> nota3 >> nota4 >> nota5 >> nota6 >> nota7 >> nota8;

    media = (nota1+nota2+nota3+nota4+nota5+nota6+nota7+nota8)/8;

    ofstream saida("media6.3.txt");
    saida << setprecision(3) << fixed << media << endl;
    saida.close();
	return 0;
}