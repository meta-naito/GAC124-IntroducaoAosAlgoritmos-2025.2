//semana 10, ex 16
#include <iostream>

int calculaLogaritmo3(int num) {
    if (num == 1) {
        return 1;
    }

    else {
        return calculaLogaritmo3(num / 3);
    }
}

int main() {
    int aux = 0;

    std::cin >> aux;

    while (!(aux % 3 == 0)) {
        std::cout << "COLOCA A PORRA DE UMA POTÊNCIA DE 3!!" << std::endl;
        std::cin >> aux;
    }

    int num = aux;

    std::cout << calculaLogaritmo3(num) << std::endl;

    return 0;
}