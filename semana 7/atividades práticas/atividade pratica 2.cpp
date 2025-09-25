//semana 7, atividade prática 2
#include <iostream>
using namespace std;

int main(){
	const int tamVetor = 15;
	float vetor[tamVetor];
	
	for (int i = 0; i < tamVetor; i++)
		cin >> vetor[i]; //os vetores ai yayyyy
	
	int indice; //os indices dos numeros no vetor que eu quero mudar
	const int tamVAlt = 7;
	float vetorAlterado[tamVAlt];
	
	for (int j = 0; j < 7; j++) {
		cin >> indice;
		
		vetorAlterado[j] = vetor[indice]/2;
		
		cout << vetorAlterado[j] << " ";
	}

return 0;
}
