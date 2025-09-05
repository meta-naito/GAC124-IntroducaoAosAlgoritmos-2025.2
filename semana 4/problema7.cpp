//semana 4, ex 7
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int codProd, codPais;
	float kg, gramas, pBruto, imposto, valorTotal;
	
	cin >> codProd >> kg >> codPais;
	
	gramas = kg*1000;
	
	//peso bruto do produto
	if ((codProd >= 1) and (codProd <=4)) {
		pBruto = (gramas*10);
	}
	else if ((codProd >= 5) and (codProd <=7)) {
		pBruto = (gramas*25);
	}
	else {
		pBruto = (gramas*35);
	}
	//imposto
	if (codPais == 1) {
		imposto = 0;
	}
	else if (codPais == 2) {
		imposto = pBruto*0.15;
	}
	else {
		imposto = pBruto*0.25;
	}
	
	valorTotal = (pBruto+imposto);
	
	cout << setprecision(1) << fixed << gramas << endl << pBruto << endl << imposto << endl << valorTotal;
	
return 0;
}
