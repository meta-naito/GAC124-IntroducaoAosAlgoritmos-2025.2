#include <iostream>
using namespace std;

//V = [1, 3, 6, 7, 8, 22, 25, 41]

//por favor arruma isso depois KKKKKKK
void colocaNumerosIniciais(int *vetor) {
	vetor[0] = 1;
	vetor[1] = 3;
	vetor[2] = 6;
	vetor[3] = 7;
	vetor[4] = 8;
	vetor[5] = 22;
	vetor[6] = 25;
	vetor[7] = 41;
	
	return;
}

int main() {
	const int tamVetor = 20;
	int *vetor = new int[tamVetor];
	colocaNumerosIniciais(vetor);
	
	int num, qNum = 8; //qNum é igual a oito por conta dos primeiros 8 numeros já colocados anteriormente no vetor!
	
	cin >> num;
	
	while (num != -1 and qNum < tamVetor) { //se qNum for igual ao tamVetor, ele já tá preenchido e sai do while pra impressão
		qNum++;
		
		
		
		
		for (int i = 0; i < qNum - 1; i++) {
			if (vetor[i] > num) {
				for (int j = qNum; j > i; j--) {
					if (j + 1 < tamVetor) {
						vetor[j] = vetor[j-1];
					}
				}
				
				vetor[i] = num;
			}
		
			for (int i = 0; i < qNum; i++) {
				cout << vetor[i] << " ";
			}
			
			cout << endl;
		}
		
		cin >> num;
	}
	
	delete [] vetor;

	return 0;
}
