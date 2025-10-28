//semana 9, ex 2
#include <iostream>
#include <string>

using namespace std;
typedef string str;

str procuraLetras(str procurada, str palavra[], int totalPalavras) {
    int aux = 0;
    int indicePalavra = 0, tamanhoPalavra = 0;
    str palavraMaisIgual = "";

    while (indicePalavra < totalPalavras) {
        int qIguais = 0, indiceLetra = 0;  
        tamanhoPalavra = palavra[indicePalavra].size();

        while (indiceLetra < tamanhoPalavra) {
            if (procurada[indiceLetra] == palavra[indicePalavra][indiceLetra]) {
                qIguais++;
            }

            indiceLetra++;
        }
        
        if (qIguais >= aux) {
            palavraMaisIgual = palavra[indicePalavra];
            aux = qIguais;
        }

        indicePalavra++;
    }

    return palavraMaisIgual;
}

int main() {
    str procurada = "";
    int qPalavras = 0;

    cin >> procurada >> qPalavras;

    str *palavras = new str[qPalavras];

    for (int i = 0; i < qPalavras; i++) {
        cin >> palavras[i];
    }

    cout << procuraLetras(procurada, palavras, qPalavras) << endl;

    delete [] palavras;

    return 0;
}