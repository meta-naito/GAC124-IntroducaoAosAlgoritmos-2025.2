//semana 11, ex 2
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct dataAniversario {
    int dia;
    int mes;
    int ano;
};

struct individuo {
    string nome;
    dataAniversario aniversario;
};

string descobreMaisVelha(individuo *pessoas, int qPessoas) {
    individuo maisVelha = pessoas[0];

    for (int i = 1; i < qPessoas; i++) {
        if (pessoas[i].aniversario.ano < maisVelha.aniversario.ano) {
            maisVelha = pessoas[i];
        }

        else if (pessoas[i].aniversario.ano == maisVelha.aniversario.ano) {
            if (pessoas[i].aniversario.mes < maisVelha.aniversario.mes) {
                maisVelha = pessoas[i];
            }
            
            else if (pessoas[i].aniversario.mes == maisVelha.aniversario.mes) {
                if (pessoas[i].aniversario.dia < maisVelha.aniversario.dia) {
                    maisVelha = pessoas[i];
                }
            }
        }
    }

    return maisVelha.nome;
}

int main() {
    int qPessoas = 0;

    cin >> qPessoas;

    individuo *pessoas = new individuo[qPessoas];

    for (int i = 0; i < qPessoas; i++) {
        cin >> pessoas[i].nome;
        cin >> pessoas[i].aniversario.dia >> pessoas[i].aniversario.mes
        >> pessoas[i].aniversario.ano;
    }
    
    cout << descobreMaisVelha(pessoas, qPessoas) << endl;

    delete [] pessoas;

    return 0;
}