//semana 10, questao pratica 2
#include <iostream>
using namespace std;

int buscaBinaria (int tam, int vet[], int valor) {
	int pos = -1;
	
	for (int j = 0; j < tam; j++) {
		if (valor == vet[j]) {
			pos = j;
		}
	}
	
	return pos;
}

int main(){
	int tamVetor = 0, valorProcura = 0;
	
	//entrada dos valores do problema yahoooo
	cin >> tamVetor;
	
	int vetor[tamVetor] = {};
	
	for (int i = 0; i < tamVetor; i++) {
		cin >> vetor[i];
	}
	
	cin >> valorProcura;
	
	//saida
	cout << buscaBinaria(tamVetor, vetor, valorProcura) << endl;
	
	return 0;
}
