//semana 5, ex 4
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    int numAlunos = 0;
    float nota1, nota2, media;
    string nome;

    ifstream entrada("entrada.txt");
    entrada >> numAlunos;

    ofstream saida("saida.txt");

    while (entrada >> nome >> nota1 >> nota2) {
        media = (nota1 + nota2)/2;
        if (media < 7)
            saida << nome << endl;
    }

    entrada.close();
    saida.close();
    return 0;
}