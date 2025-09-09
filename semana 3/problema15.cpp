//semana 3, ex 15
//merda de inferno de questao te odeio variavel um vai se FUDER
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    int valorEntregue, valorCompra, troco, vinte, dez, cinco, dois, um;

    ifstream entrada("entrada15.3.txt");
    entrada >> valorEntregue >> valorCompra;
    
    troco = valorEntregue - valorCompra;

    vinte = troco/20;
    dez = (troco%20)/10;
    cinco = (troco%10)/5;
    dois = (troco%10%5)/2;
    um = ((troco%10%5))-(2*dois);

    ofstream saida("saida15.3.txt");
    saida << vinte << endl << dez << endl << cinco << endl << dois << endl << um << endl;

    saida.close();
    return 0;
}