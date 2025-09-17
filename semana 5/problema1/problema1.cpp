//semana 5, ex 1
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int valor, menor, maior, sMaior, sMenor;
	
	ifstream entrada("entrada.txt");
	
	if (entrada) {
		entrada >> valor;

		menor = sMenor = maior = sMaior = valor; //para ter algum numero para conseguir comparar!
	
		while (entrada >> valor) { //enquanto a entrada recebe algum valor
			if (valor < menor)
				menor = valor;
      	  if (valor > maior) //se o valor for MAIOR que o numero na variavel maior,
				maior = valor; //o valor é atrubuído a variavel maior!!
		}

		entrada.close(); //"resetando" o arquivo para ler tudo dnv e descobrir o segundo menor e maior
	
    	ifstream entrada2("entrada.txt");
		entrada2 >> valor;

		while ((entrada2 >> valor)) {
			if ((valor < sMenor) and (valor != menor) and (valor != maior))
				sMenor = valor; 
			if ((valor > sMaior) and (valor != menor) and (valor != maior))
				sMaior = valor;
		}
	
		cout << menor << endl << sMenor << endl << maior << endl << sMaior << endl;
		entrada2.close();
	}
	else {
		cout << "não tem arquivo: /entrada.txt/ :(" << endl;
	}

	
	return 0;
}
