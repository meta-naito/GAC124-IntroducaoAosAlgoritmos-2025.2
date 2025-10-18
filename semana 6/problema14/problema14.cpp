//semana 6, ex 14
#include <iostream>
using namespace std;

double calcFatorial (int num) {
    double fatorial = 1;

    for (int i = num; i > 0 ; i--)
        fatorial *= (double)i;

    return fatorial;
}

int combinacaoSimples(int N, int P) {
    int combinacao = calcFatorial(N)/(calcFatorial(P)*calcFatorial(N-P));

    return combinacao;
}

int main () {
    int num1 = 0, num2 = 0;

    cin >> num1 >> num2;
    
    cout << combinacaoSimples(num1, num2) << endl;

    return 0;
}