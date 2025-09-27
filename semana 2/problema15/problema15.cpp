//semana 2 de Ialg, ex 15
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main ()
{
    float arrBaixo, arrCima, arrRound;
    int inteiro;
    double valor, fracao;

    cin >> valor;
    inteiro = valor; //acho que tem jeito melhor de fzr isso mas fodasseKKKKK
    fracao = valor-inteiro; //mesmo comentario do de cimaKKKK
    arrBaixo = floor(valor); //arredonda o numero SEMPRE para baixo
    arrCima = ceil(valor); // arredonda o numero SEMPRE para cima
    arrRound = round(valor); //arredonda o numero usando os parametros normais de arredondamento

    ofstream arquivo("saida.txt");
    arquivo << inteiro << endl << fracao << endl << arrBaixo << endl << arrCima 
    << endl << arrRound << endl;
    arquivo.close();
    return 0;
}
