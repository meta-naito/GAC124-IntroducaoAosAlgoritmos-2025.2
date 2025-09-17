//semana 2 de Ialg, ex 2
#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    float derrapagem, velocidade;
    cin >> derrapagem;

    velocidade = 14.6*sqrt(derrapagem);
    cout << velocidade;
    
    return 0;
}