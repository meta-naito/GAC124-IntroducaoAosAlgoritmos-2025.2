//semana 5, ex 5
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeProd, maiorNome;
	int qProd, qVendas, qTotal, i, maior = 0;
	
	ifstream entrada("estoque.txt");
	entrada >> i;
	//ERA TANTO PRA USAR 'FOR' AQUI :(((((
	
	while ((entrada >> nomeProd >> qProd >> qVendas) and (i >= 0)) {
		qTotal = qProd - qVendas;

		cout << nomeProd << " " << qTotal;
		
		if (qTotal < 50)
			cout << " " << "BAIXO ESTOQUE";

		cout << endl;

		if (maior < qTotal) {
			maior = qTotal;
			maiorNome = nomeProd;
		}

		i--;
	}
	cout << maiorNome << " " << maior << endl;
	
return 0;
}
