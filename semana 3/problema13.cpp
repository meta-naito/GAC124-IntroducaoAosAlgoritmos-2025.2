//semana 3, ex 13
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int valor, cem, cinquenta, dez;

    cin >> valor;

    //como a variavel 'cem' é inteira, sempre só vai truncar o valor
    cem = valor/100;
    //modulo da divisao entre o valor e 100 = da o resto que falta
    //divide por cinquenta para das as notas, como é inteira trunca o valor e o resto passa pro 'dez'
    cinquenta = (valor%100)/50;
    //mesma explicacao do 'cinquenta', mas tem que pegar tb o resto por 50 pra ficar certinho :p
    dez = ((valor%100)%50)/10;

    ofstream saida("saque13.3.txt");
    saida << cem << endl << cinquenta << endl << dez << endl;
    saida.close();

    return 0;
}