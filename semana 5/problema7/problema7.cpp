//semana 5, ex 7
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num, dobro, i = 0;
    string nomeArquivo;

    cin >> nomeArquivo;

    ifstream entrada(nomeArquivo);
        entrada >> num;
    ofstream saida("dobro.txt");
    

    //oq eu tenho que criar é uma comparacao entre os dois numerosKKKK mas como????
    while (entrada >> dobro) {
        if (dobro == num * 2)
            i++;
        num = dobro;
    }

    saida << i << endl;

    return 0;
}
