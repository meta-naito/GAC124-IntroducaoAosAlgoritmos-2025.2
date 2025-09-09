//semana 3, ex 10
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    float alturaDegrau, altura, qDegrau;
//    int qDegrau;

    ifstream entrada("entrada10.3.txt");
    entrada >> alturaDegrau >> altura;

    //transformei aqui tudo em cm, por isso a altura (em metros) multiplicada p/ 100
    qDegrau = ((altura*100)/alturaDegrau);

    ofstream saida("degraus10.3.txt");
    saida << ceil(qDegrau) << endl;

    saida.close();
    return 0;
}