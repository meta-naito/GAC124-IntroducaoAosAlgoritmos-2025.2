//semana 6, ex 12
#include <iostream>
#include <cmath>
using namespace std;

float fatorial (int n) { //vou mudar aqui q fica mais facil dpsKKKKK
	float fatorial = 1;
	int i = n;
	/* fatorial serve aqui pra fazer a bostinha da conta, ai dps vai ter outra
	funcao que realmente calcula euler - NA MAIN!!!! */
	
	while (i > 0) {
		fatorial *= i;
		i--;
	}
	
	return fatorial;
}

double euler (int n) {
	double euler = 0;
	n--;
	
	while (n >= 0) {
		euler += (1/fatorial(n));
		n--;
	}

	return euler;
}

int main(){
	int n;
	cin >> n;
	
	cout << euler(n) << endl;
	
	return 0;
}
