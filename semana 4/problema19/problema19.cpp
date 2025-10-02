//semana 4, ex 19
#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 0;
    char operacao;

    cin >> n1 >> n2 >> operacao;

    if (operacao == '+') {
        cout << (n1 + n2) << endl;
    }
    else if (operacao == '-') {
        cout << (n1 - n2) << endl;
    }
    else if (operacao == '*') {
        cout << (n1 * n2) << endl;
    }
    else if (operacao == '/') {
        if (n2 != 0) {
            cout << (n1 / n2) << endl;
        }
        else {
            cout << "ERRO!" << endl;
        }
    }
    else {
        cout << "NAO E UMA OPERACAO :p" << endl;
    }

    return 0;
}