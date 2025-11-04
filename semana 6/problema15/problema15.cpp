//semana 6, ex 15
#include <iostream>

int calculaMDC(int dividendo, int divisor) {
    int resto = 0;

    while (divisor != 0) {
        resto = dividendo % divisor;
        dividendo = divisor;
        divisor = resto;
    }
    int mdc = dividendo;

    return mdc;
}

int calculaSimplificacao(int num1, int divisor) {
    return (num1 / divisor);
}


int main () {
    int numerador, denominador;
    std::cin >> numerador >> denominador;

    int divisor = calculaMDC(numerador, denominador);

    std::cout << calculaSimplificacao(numerador, divisor) << std::endl << calculaSimplificacao(denominador, divisor) << std::endl;

    return 0;
}