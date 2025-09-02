//semana 2 de Ialg, ex 10  QUE EU VOU MATAR QUE RAIVA ODIO ETERNO >:(
#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
    int dias;
    float valorLiquido;
    
    ifstream entrada ("entrada10.2.txt");
    ofstream saida ("saida10.2");
    
    entrada >> dias; 
    
    valorLiquido = (60*dias)*0.92;
    saida << "R$ " << valorLiquido;
    saida.close();
    return 0;
}