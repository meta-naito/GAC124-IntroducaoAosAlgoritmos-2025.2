//semana 2 de Ialg, ex 1 babyyyyy
#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    float numero1, numQuadrado, numCubo, raizQuadrada;

    cin >> numero1;
    numQuadrado = pow(numero1,2);
    numCubo = pow(numero1,3);
    raizQuadrada = sqrt(numero1);

    cout << numQuadrado << endl << numCubo << endl << raizQuadrada << endl;
    return 0;
}