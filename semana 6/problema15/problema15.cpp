//semana 6, ex 15
#include <iostream>
using namespace std;


void mdc(int& numerador, int& denominador) {
    //achar o MDC
    int aux = 2;
    bool divisor = true;

    while ((aux <= numerador) or (aux <= denominador)) {
        if ((numerador % aux == 0) and (denominador % aux == 0)) {
            divisor = true;
            
            if (divisor) {
                numerador /= divisor;
                denominador /= divisor;
            }
        }

        aux++;
    }

}

int main () {
    int numerador, denominador;



    return 0;
}