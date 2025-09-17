//semana 3, ex 2
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string texto, nomeArquivo;
    getline(cin >> ws,nomeArquivo);
    getline(cin >> ws,texto);
    //getline na verdade faz com que o cin permite que vc use espaços para escrever!!
    //o ws nn sei praw funciona, mas o povo fala que as vezes o getline nn funciona exatamente
    //se usar so o cin ele nn permite espaços, por isso o tremKKKK
    
    ofstream saida(nomeArquivo);
    saida << texto;
    saida.close();
    return 0;
    //o teste desse é HEY EVERY!!
}