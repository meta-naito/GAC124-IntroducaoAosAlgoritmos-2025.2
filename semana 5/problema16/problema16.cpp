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
	
	ifstream entrada("entrada.txt");
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
	media = (float)soma / cont;
	
	cout << fixed << setprecision(1);
	cout << maior << endl << menor << endl << media << endl;
	
	return 0;
}
