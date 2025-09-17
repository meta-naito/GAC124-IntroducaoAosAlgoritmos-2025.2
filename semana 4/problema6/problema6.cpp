//semana 4, ex 6
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float peso, altura;
	char classificacao;

	cin >> peso >> altura;

	if (altura < 1.20) {
		if (peso < 60) {
			classificacao = 'A';
		}
		else if ((peso >= 60) and (peso <=90)){
			classificacao = 'D';
		}
		else {
			classificacao = 'G';
		}
	}	
	else if ((altura >= 1.20) and (altura <= 1.70))	{
		if (peso < 60) {
			classificacao = 'B';
		}
		else if ((peso >= 60) and (peso <=90)){
			classificacao = 'E';
		}
		else {
			classificacao = 'H';
		}
	}
	else {
		if (peso < 60) {
			classificacao = 'C';
		}
		else if ((peso >= 60) and (peso <=90)){
			classificacao = 'F';
		}
		else {
			classificacao = 'I';
		}
	}

	cout << classificacao << endl;

	return 0;
}
