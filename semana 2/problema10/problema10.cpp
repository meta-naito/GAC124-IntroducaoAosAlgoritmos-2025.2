//semana 2 de Ialg, ex 10  QUE EU VOU MATAR QUE RAIVA ODIO ETERNO >:(
#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
    int dias;
    float valorLiquido;
    
    ifstream entrada ("entrada.txt");    
    entrada >> dias; 
    
    valorLiquido = (60*dias)*0.92;

    ofstream saida ("saida.txt");
    saida << "R$ " << valorLiquido << endl;
    saida.close();

    return 0;
}