//semana 10, ex 12
#include <iostream>

//tem que parar quando der a quantidade de vezes do num2

int somasSucessivas(int num1, int num2) {
    if (num2 == 0) {
        return 0;
    }

    else {
        return (num1 + somasSucessivas(num1, num2 - 1)); 
    }
}

int main() {
    int num1 = 0, num2 = 0;

    std::cin >> num1 >> num2;       

    std::cout << somasSucessivas(num1, num2) << std::endl;

    return 0;
}