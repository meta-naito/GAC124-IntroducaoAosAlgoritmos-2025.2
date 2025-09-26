//semana 6, ex 6
#include <iostream>
using namespace std;

int somaDigitos(int N) { //nao pode manipular o N pq precisa dele pro outro la de harshad :(
    int soma = 0;
    const int i = 10;

    while (N > 0) {
        soma += (N % i);
        N = N/i;
    }

    return soma;
}

bool harshad(int n, int s) {
    bool harshad = false;
    
    if (n % s == 0)
        return harshad = true;
    else
        return harshad;
}

int main () {
    int num = 0, soma = 0, resto = 0;

    cin >> num;
    
    soma = somaDigitos(num);
    resto = (num % soma);

    cout << resto << " ";

    if (harshad(num, soma) == true)
        cout << "sim";
    else
        cout << "nao";

    return 0;
}