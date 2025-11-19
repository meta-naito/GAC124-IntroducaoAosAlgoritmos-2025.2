//semana 13, questão prática 2
#include <iostream>

void imprimeVetor(int *vetor, int tam);

void selectSortDecres(int *vetor, int qNum) {
	int indice, iProx, iMaior;
	int aux = 0;
	
	for (indice = 0; indice < (qNum - 1); indice++) {
		iMaior = indice;
		iProx = indice + 1; //indice proximo pra quem nao entendeu (vulgo eu no futuroKKK)
		
		while (iProx < qNum) {
			if (vetor[iProx] > vetor[iMaior]) {
				iMaior = iProx;
			}
			iProx++;
		}
		
		aux = vetor[indice];
		vetor[indice] = vetor[iMaior];
		vetor[iMaior] = aux;
		
		imprimeVetor(vetor, qNum);
	}
	
	return;
}

void imprimeVetor(int *vetor, int tam) {
	for (int i = 0; i < tam; i++) {
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;

	return;
}

int main() {
	int qNum;
	std::cin >> qNum;
	
	int *vetor = new int[qNum];
	for (int i = 0; i < qNum; i++) {
		std::cin >> vetor[i];
	}
	
	selectSortDecres(vetor, qNum);
	
	delete [] vetor;
	
	return 0;
}
