//semana 11, ex 2
#include <iostream>
using namespace std;

struct dataCalendario {
    int dia, mes, ano;
};

struct pessoa {
    string nome;
    dataCalendario aniversario;
};

string descobreMaisVelha(pessoa *pessoas, int qPessoas, string& maisVelho) {
    maisVelho = pessoas[0].nome;

    for (int i = 0; i < qPessoas; i++) {





    }



    return maisVelho;
}

int main() {
    int qPessoas = 0;

    cin >> qPessoas;

    pessoa *pessoas = new pessoa[qPessoas];

    for (int i = 0; i < qPessoas; i++) {
        cin >> pessoas[i].nome;
        cin >> pessoas[i].aniversario.dia >> pessoas[i].aniversario.mes
        >> pessoas[i].aniversario.ano;
    }

    string maisVelho = "";
    
    cout << descobreMaisVelha(pessoas, qPessoas, maisVelho) << endl;

    delete [] pessoas;

    return 0;
}