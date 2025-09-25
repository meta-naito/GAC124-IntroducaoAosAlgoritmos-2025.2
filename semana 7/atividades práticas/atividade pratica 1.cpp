#include <iostream>
#include <cmath>
using namespace std;

int par (int vet[], int repeticao) {
	int i = 0;
	
	vet[i] *= repeticao;
	
	return vet[i];
}

int impar(int vet[], int repeticao) {
	int i =0;
	
	vet[i] = pow(vet[i], repeticao);
	
	return vet[i];
}

void calcRepeticao(int vet[], int& N) {
	int comparacao = vet[0], r = 1;
	bool repeticao = false;
	
	for (int i = 1; i < N; i++) {
		if (vet[i] == comparacao) { //se tiver numero igual
			repeticao = true;
			
			if (repeticao) {
				r++; //sobe a quantidade de repeticoes
				int aux = vet[i]; // para ver se tem ainda mais numeros repetidos
				
				if (r == 2)
					vet[i] = par(vet, r);
				
				else {
					for (int i2 = i + 1; i2 < N; i2++) { //para ainda checar se tem mais numeros repetidos
						//aqui eu to fazendo o vetor pular ja de posicao em um pra eu ver se tem ainda porrinha la sla
						if (vet[i2] == aux) {
							r++;
							
							if (r % 2 == 0)
								vet[i] = par(vet, r);
							else
								vet[i] = impar(vet, r);
							
							aux = vet[i2];
						}
					}
				}
			}
		}
		cout << vet[i] << " ";
	}
}

int main(){
	const int tamVetor = 10;
	int vetor[tamVetor], num;
	
	cin >> num;
	
	for (int i = 0; i < num; i++)
		cin >> vetor[i];
	
	calcRepeticao(vetor, num);
	
return 0;
}

/* ta, oq eu tenho que fazer: 
 * 1. achar a quantidade de vezes que um certo numero repete
 * 2. ver se essa quantidade é impar ou par
 * 3. fazer a conta necessaria
 * 4. tirar os numeros repetidos do vetor original
 * 5. finalmente, imprimir o vetor alterado (que vai ser o mesmo vetor original :D)
*/
