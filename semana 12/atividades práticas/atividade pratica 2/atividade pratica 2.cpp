//semana 12, atividade prática 2
#include <iostream>
using namespace std;

char *geraVetor(int &tam) {
    char *vetor = new char[tam];  

    return vetor;
}

void lerVetor(char *&vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }

    return;
}  

void redimensionaVetor(char *&vetor, int &tam) {
    int tamTemp = (tam -1);
    char *temp = geraVetor(tamTemp);

    int iTemp = 0;

    for (int i = 0; i < tam; i++) {
        if (vetor[i] == '-1') {
            
        }

        else {
            temp[iTemp] = vetor[i]; 
            iTemp++;
        }

    }


    return;
}

int main() {
    int tamVetor1 = 0;
    cin >> tamVetor1;

    char *vetor1 = geraVetor(tamVetor1);
    lerVetor(vetor1, tamVetor1);
    
    int tamVetor2 = 0;
    cin >> tamVetor2;
    
    char *vetor2 = geraVetor(tamVetor2);
    lerVetor(vetor2, tamVetor2);

    //varrendo o primeiro vetor
    for (int i = 0; i <= tamVetor1; i++) {
        //varrendo o segundo vetor para a checagem de chars iguais
        for (int j = 0; j < tamVetor2; j++) {
        
            if (vetor1[i] == vetor2[j]) {
                //troca para algum char que NÃO pode ser usado
                vetor1[i] = '-1';
                
                //e redimensiona o vetor !
                redimensionaVetor(vetor1, tamVetor1);

                j++;
            }
        }
    }


    delete [] vetor1;
    delete [] vetor2;

    return 0;
}