//semana 4, ex 2
#include <iostream>

using namespace std;
int main()
{
    double a, b, resultado;
    int x;

    cin >> a >> b >> x;

    //media aritmetica dos numeros
    if (x == 1) {
        resultado = ((a+b)/2);
        cout << resultado << endl;
    }

    //subtracao dos numeros
    else if (x == 2) {
        if (a > b){
            resultado = (a-b);
            cout << resultado << endl;
        }
        else if (b > a){
            resultado = (b-a);
            cout << resultado << endl;
        }
    }

    //produto dos numeros
    else if (x == 3) {
        resultado = (a*b);
        cout << resultado << endl;
    }

    //divisao de a por b
    else if (x == 4) {
        if (b != 0) {
            resultado = (a/b);
            cout << resultado << endl;
        }
        else if (b == 0) {
            cout << "ERRO" << endl;
        }
    }

    //x qndo nn esta no intervalo [1,4]
    else {
        cout << "ERRO" << endl;
    }
    return 0;
}