//semana 6, ex 7
#include <iostream>
using namespace std;

string romano(int N) {
    string romano = "";
    int dezena = 0, unidade = 0;

    //para achar os números individuais
    dezena = N/10;
    unidade = N % 10;
    //dezenas
    if (dezena == 5) {
        romano += "L";
        dezena -= 5;
    }
    if ((dezena < 5) and (dezena >= 4)) {
        romano += "XL";
        dezena -= 4;
    }
    if ((dezena < 4) and (dezena > 0)) {
        for (dezena; dezena > 0; dezena--)
            romano += "X";
    }
    else
        romano += "";
    //unidades
    if (unidade == 9) {
        romano += "IX";
        unidade -= 9;
    }
    if ((unidade < 9) and (unidade >= 5)) {
        romano += "V";
        unidade -= 5;
    }
    if (unidade == 4) {
        romano += "IV";
        unidade -= 4;
    }
    if ((unidade >= 1) and (unidade <=3)) {
        for (unidade; unidade > 0; unidade--)
            romano += "I";
    }
    else
        romano += "";

    return romano;
}

int main() {
    int num = 1;

    while (num > 0) {
        cin >> num;
        if (num > 50)
            cout << "NUMERO INVALIDO" << endl;
        else
            cout << romano(num) << endl;
    }
    return 0;
}