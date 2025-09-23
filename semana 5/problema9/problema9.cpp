//semana 5, ex 9
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string pontuacaoJ1, pontuacaoJ2;
    int somaJ1 = 0, somaJ2 = 0, rodadas = 0;

    ifstream entrada("boliche.txt");

    //caso aconteçam 10 rodadas
    if (rodadas <= 10) {
        while (entrada >> pontuacaoJ1 >> pontuacaoJ2) {
            if (pontuacaoJ1 == "VERDE")
                somaJ1++;
            if (pontuacaoJ2 == "VERDE")
                somaJ2++;
            rodadas++;
            }
    }
    //caso aconteçam mais de 10 rodadas: desempate
    else if (rodadas > 10) {
        while (entrada >> pontuacaoJ1 >> pontuacaoJ2) {
            if ((pontuacaoJ1 == "VERDE") and (pontuacaoJ2 != "VERDE"))
                somaJ1++;
            else if ((pontuacaoJ1 != "VERDE") and (pontuacaoJ2 == "VERDE"))
                somaJ2++;
            rodadas++;
        }
    }
    //checando quem é o vencedor
    if (somaJ1 > somaJ2)
        cout << "Jogador 1 é o ganhador da aposta" << endl;
    else
        cout << "Jogador 2 é o ganhador da aposta" << endl;

    return 0;
}
