//semana 5, ex 2
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    int num, numTriangular;

    ifstream entrada("entrada.txt");
    ofstream saida("saida.txt");

    while (entrada >> num) {
        numTriangular = (num * (num + 1))/2;
        saida << numTriangular << endl;
    }

    entrada.close();
    saida.close();
    return 0;
}