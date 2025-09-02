//semana 3, ex 2
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string texto, nomeArquivo;
    cin >> ws,nomeArquivo;
    cin >> ws,texto;
    
    ofstream saida(nomeArquivo);
    saida << texto;
    saida.close();
    return 0;
    //o teste desse é "hEYeVERY"
}