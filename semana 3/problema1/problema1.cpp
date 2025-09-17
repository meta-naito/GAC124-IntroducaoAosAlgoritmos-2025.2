//semana 3, ex 1
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string nomeArquivo, palavra;
    
    cin >> nomeArquivo;
    ifstream entrada(nomeArquivo); 
    /*quando vc quer fazer o nome do arquivo ser um variavel (nn deixar ele com o nome fixo), vc NAO
    coloca parenteses!!! senao o codigo pensa que tem um arquivo com esse nome sendo que nn tem*/
    entrada >> palavra;

    cout << palavra << endl;
    entrada.close();
    //o teste desse é o "tenner.txt"!!
}