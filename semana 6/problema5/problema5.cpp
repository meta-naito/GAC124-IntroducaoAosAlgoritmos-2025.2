//semana 6, ex 5
#include <iostream>
#include <fstream>
using namespace std;

int naoMultiplo3(int& N) {
    if (N % 3 == 0)
        return -1;
        
    else
        return N;
}

int main () {
    string nomeArquivo;
    int num, mul3;

    cin >> nomeArquivo;
    
    ifstream entrada(nomeArquivo);
    ofstream saida("saida.txt");

    while (entrada >> num) {
        mul3 = naoMultiplo3(num);

        if (mul3 == num)
            saida << num << " ";
    }

    return 0;
}