//semana 5, ex 8
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeArquivo;
    char charaUndertale;
    int vogais = 0;

    cin >> nomeArquivo;
    
    ifstream entrada(nomeArquivo);

    //por acaso c++ tem diferenca entre maiuscula e minuscula?
    while (entrada >> charaUndertale) {
        // Transformar maiuscula
        //letra a
        if ((charaUndertale == 'a') or (charaUndertale == 'A'))
            vogais++;
        //letra e
        else if ((charaUndertale == 'e') or (charaUndertale == 'E'))
            vogais++;
        //letra i
        else if ((charaUndertale == 'i') or (charaUndertale == 'I'))
            vogais++;
        //letra o
        else if ((charaUndertale == 'o') or (charaUndertale == 'O'))
            vogais++;
        //letra u
        else if ((charaUndertale == 'u') or (charaUndertale == 'U'))
            vogais++;
    }

    cout << vogais << endl;

    return 0;
}
