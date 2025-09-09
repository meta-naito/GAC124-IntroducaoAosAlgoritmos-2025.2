//semana 3, ex 8
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main()
{
   
    float custoTeatro, precoConvite, quantConvite;

    ifstream entrada("teatro8.3.txt");
    entrada >> custoTeatro >> precoConvite;

    quantConvite = (custoTeatro/precoConvite);

    ofstream saida("convite8.3.txt");
    saida << ceil(quantConvite);

    cout << ceil(quantConvite) << endl;

    saida.close();
    return 0;
}