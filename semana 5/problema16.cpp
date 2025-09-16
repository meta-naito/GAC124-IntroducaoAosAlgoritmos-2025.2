//semana 5, ex 16
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int num, maior = 0, menor = 0;
	int soma = 0, cont = 0;
	float media;
	
	ifstream entrada("entrada16.5.txt");
	
	entrada >> num;
	soma += num;
	cont++;
	maior = menor = num;
	
	while (entrada >> num) {
		soma += num;
		cont++;
		if (num < menor)
			menor = num;
		if (num > maior)
			maior = num;
	}	
	
	//MEDIA DOS NUMEROS TODOS AAAAAARGH
	media = (float)soma /cont;
	
	cout << fixed << setprecision(1);
	cout << maior << endl << menor << endl << media << endl;
	
	return 0;
}

/* precisamos primeiro atribuir algum numero da lista como o menor e maior,
 * pra assim fazer as comparacoes
 * tipo, se o numero digitado dps for maior que a variavel menor, continua sendo o menor
 * MAS, se o numero digitado FOR menor, ai esse numero vira o menor
*/
