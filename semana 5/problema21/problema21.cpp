//semana 5, ex 21
#include <iostream>
#include <fstream>
using namespace std;

void calculaDivisor (int num) {
    int soma = 0;
    ofstream saida("saida.txt");

    for (int divisor = 1; divisor <= num; divisor++) {
        if (num % divisor == 0) {
            saida << divisor;
            soma += divisor;
            
            if (divisor != num) {
                saida << "+";
            }
        }
    }
    
    saida << "=" << soma << endl;
}

int main () {
    int N = 0;

    cin >> N;
    
    calculaDivisor(N);

    return 0;
}