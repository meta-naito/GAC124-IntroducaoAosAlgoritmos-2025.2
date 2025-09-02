#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float valor1; //variavel real positiva
	float numAoQuadrado; //float sao tudo variaveis???
	float numAoCubo;
	float raizQuadrada;
	cin >> valor1; // in de input
	numAoQuadrado = pow(valor1, 2);
	cout << numAoQuadrado << endl; //exibe na tela oq ta escrito slaKKKK, o endl é para nao ficar todos os resultados numa mesma linha
	numAoCubo = pow(valor1, 3);
	cout << numAoCubo << endl;
	raizQuadrada = sqrt(valor1);
	cout << raizQuadrada;
	return 0;
}
