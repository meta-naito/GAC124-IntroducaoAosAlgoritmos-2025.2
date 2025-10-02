//semana 4, ex 17
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float multaBase = 0, velMax = 0, velMotorista = 0;

    cin >> multaBase >> velMax >> velMotorista;

    //velocidade abaixo ou igual a 130%
    if (velMotorista <= (velMax * 1.3)) {
        cout << "NAO SE APLICA" << endl;
    }
    //caso a velocidade for acima de 130%
    else {
        cout << "R$ " << fixed << setprecision(2) << (multaBase * 1.5) << endl;
    }

    return 0;
}