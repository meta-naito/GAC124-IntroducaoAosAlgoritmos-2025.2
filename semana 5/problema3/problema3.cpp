//semana 5, ex 3
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main () {
    int num = 0, mersenne = 0, i= 0;

    ifstream entrada("senha.txt");
    entrada >> num;

    ofstream saida("saida.txt");

	while ((mersenne = pow(2, i) - 1) <= num) {
        i++;
        saida << mersenne << "  ";
	}
	
    saida.close();
    entrada.close();
    return 0;
}
