//semana 5, ex 3
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main () {
    int num, mersenne = 0, i= 0;

    ifstream entrada("senha.txt");
    entrada >> num;

    ofstream saida("saida.txt");

    do {
        mersenne = (pow(2, i) - 1); //essa parte ta indo de boa, os numeros sao de mersenne mesmo
        i++;
        saida << mersenne << "  ";

    } while (mersenne <= num); //AGORA, voce NAO ta indo!!! odio!!!!

    saida.close();
    entrada.close();
    return 0;
}
