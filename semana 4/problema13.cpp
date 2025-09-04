#include <iostream>
using namespace std;
int main()
{
	float picanha, alcatra, linguica, espetoVeg, sal, farinha, carvao, valorTotal, desconto, valorFinal;
	int qP, qA, qL, qEV, qS, qF, qC;
	
	cin >> qP >> qA >> qL >> qEV >> qS >> qF >> qC;
	
	picanha = qP*28.90;
	alcatra = qA*19.90;
	linguica = qL*7.95;
	espetoVeg = qEV*2.99;
	sal = qS*1.50;
	farinha = qF*1.85;
	carvao = qC*8.70;
	
	valorTotal = picanha+alcatra+linguica+espetoVeg+sal+farinha+carvao;
	
	if (valorTotal <= 200) {
		desconto = valorTotal*0.05;
	}
	else {
		desconto = valorTotal*0.10;
	}
	
	valorFinal = valorTotal-desconto;
	cout << valorTotal << endl << desconto << endl << valorFinal << endl;

	return 0;
}
