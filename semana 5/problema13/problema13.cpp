//semana 5, ex 13
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int H = 0, horasI = 0, qVoltas = 0, qH = 0;
    int i = 0;

    ifstream entrada("magia.txt");
        entrada >> H;

    //primeiro while que varre o arquivo
    while (entrada >> horasI >> qVoltas) {
        i = 1;
        //outro while aqui pra ver se a subtracao é igual a H
        while (i <= qVoltas) {
            if ((horasI - i) == H) {
                qH++;
            }
            i++;
        }
    }

    cout << qH << endl;

    return 0;
}