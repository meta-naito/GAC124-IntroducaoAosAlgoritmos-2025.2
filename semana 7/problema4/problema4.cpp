//semana 7, ex 4
#include <iostream>
using namespace std;

int qAcertos (char gabarito[], char prova[], int tam) {
    int nota = 0;
    //tem que ver se a letra do gabarito na posicao é igual a letra na mesma posicao da prova
    //se for, aumenta em 1 a nota
    //se nao, continua

    for (int i = 0; i < tam; i++) {
        if (gabarito[i] == prova[i]) {
            nota++;
        }
    }

    return nota;
}

string situacaoAluno (int nota[], int indiceNota) {
    string situacao = "";
 
    if (nota[indiceNota] >= 6) {
        situacao = "APROVADO";
    }
    else {
        situacao = "REPROVADO";
    }
    
    return situacao;
}

int main () {
    const int tamGabarito = 10, tamIndiceProva = 2;
    char gabarito[tamGabarito], gabAlunos[tamGabarito]; //gabAlunos é a prova dos alunos
    int nota[tamIndiceProva]; //o tamanho do vetor pode mudar dependendo do numero de alunos

    for (int i = 0; i < tamGabarito; i++) { //lendo o gabarito principal
        cin >> gabarito[i];
    }

    for (int i = 0; i < tamGabarito; i++) { //o gabarito da prova 1;
        cin >> gabAlunos[i];
    }
    nota[0] = qAcertos(gabarito, gabAlunos, tamGabarito);

    for (int i = 0; i < tamGabarito; i++) { //o gabarito da prova 2;
        cin >> gabAlunos[i];
    }
    nota[1] = qAcertos(gabarito, gabAlunos, tamGabarito);

    cout << nota[0] << endl << situacaoAluno(nota, 0) << endl
    << nota[1] << endl << situacaoAluno(nota, 1) << endl;

    return 0;
}