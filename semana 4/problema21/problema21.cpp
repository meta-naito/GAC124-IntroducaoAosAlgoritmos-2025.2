//semana 4, ex 21
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float valor = 0;

    cin >> valor;

    float valorMae = valor * 0.2;

    if (valorMae < 30) {
        cout << "sim " << fixed << setprecision(2) << valorMae << endl;
    }
    else {
        cout << "nao " << fixed << setprecision(2) << valorMae << endl;
    }

    return 0;
}