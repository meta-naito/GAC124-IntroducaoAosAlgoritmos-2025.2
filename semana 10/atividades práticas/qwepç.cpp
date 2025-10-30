#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int buscaBinaria(int V[], int posInicial, int posFinal, int K);
int buscaSequencial(int V[], int tam, int K);

int buscaBinaria(int V[], int posInicial, int posFinal, int K) {
	int meio = (posInicial + posFinal) / 2;
	
	if (K == V[meio]) {
		return meio;
	}
	else if (posInicial < posFinal) {
		if (V[meio] < K) {
			return buscaBinaria(V, (meio + 1), posFinal, K);
		}
		else {
			return buscaBinaria(V, posInicial, (meio - 1), K);
		}
	}
	else {
		return -1;
	}	
}

int buscaSequencial(int V[], int tam, int K) {
	int i = 0, posicao = -1;
	
	while ((i < tam) and (V[i] != K)) {
		i++;
	}
	if (i != tam) {
		posicao = i;
	}

	return posicao;
}

int main() {
	const int tamVetor = 9;
	int vetor[tamVetor] = {};
	
	for (int i = 0; i < tamVetor; i++) {
		cin >> vetor[i];
	}

	int procura = 0;

	cin >> procura;
	cout << "Busca binária do vetor: " << buscaBinaria(vetor, 0, (tamVetor-1), procura) << endl;
	cout << "Busca sequencial do vetor : " << buscaSequencial(vetor, tamVetor, procura) << endl;

	return 0;
}
