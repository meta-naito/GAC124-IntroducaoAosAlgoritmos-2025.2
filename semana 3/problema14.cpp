//semana 3, ex 14
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    float salario, despesa1, despesa2, saldoFinal;

    ifstream entrada("entrada14.3.txt");
    entrada >> salario >> despesa1 >> despesa2;

    saldoFinal = salario - despesa1 - despesa2 - (despesa1*0.0038) - (despesa2*0.0038);
    
    cout << setprecision(2) << fixed << saldoFinal;
    return 0;
}