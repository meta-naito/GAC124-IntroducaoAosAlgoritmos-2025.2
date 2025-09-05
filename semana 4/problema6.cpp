#include <iostream>
using namespace std;
int main()
{
	float peso, altura;
	char classificacao;
	
	cin >> peso >> altura;
	
	if (altura <= 1.20) {
		if (peso > 90) {
			classificacao = 'G';
		}
		else if ((peso > 60) and (peso <= 90)) {
			classificacao = 'D';
		}
		else {
			classificacao = 'A';
		}
	}
	else if ((altura > 1.20) and (altura <= 1.70)){
		if (peso > 90) {
			classificacao = 'H';
		}
		else if ((peso > 60) and (peso <= 90)) {
			classificacao = 'E';
		}
		else {
			classificacao = 'B';
		}
	}
	else {
		if (peso > 90) {
			classificacao = 'I';
		}
		else if ((peso > 60) and (peso <= 90)) {
			classificacao = 'F';
		}
		else {
			classificacao = 'C';
		}
	}

	cout << classificacao << endl;
	
	return 0;
}
