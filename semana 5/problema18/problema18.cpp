//semana 5, ex 18
#include <iostream>
#include <fstream>
using namespace std;

bool calculaPrimo (int primo) {
    bool ePrimo = true;
    int i = 2;

    while (i <= (primo/2)) {
        
        if (primo % i == 0) {
        ePrimo = false;
        }
        
        i++;
    }
    return ePrimo;
}

int main () {
    int qPrimos = 0, primo = 2;
    
    cin >> qPrimos;
    int n = qPrimos;

    ofstream saida("saida");

    while (n > 0) { //contagem dos n numeros primos
        if (calculaPrimo(primo) == true) {
            saida << primo << endl;
            n--;
        }
        primo++;
    }

	return 0;
}