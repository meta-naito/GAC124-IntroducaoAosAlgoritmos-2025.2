//semana 5, ex 10
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int tentativa, senha = 23031999;
	int cont = 0;
	string resultado;
	
	ifstream entrada("tentativas10.5.txt");
	if (entrada) {
		while (entrada >> tentativa) { //enquanto ainda tem tentativa, ou seja numeros no arquivo;
		cont++;	//aumenta a contagem em 1
			if ((tentativa != senha) or (cont > 4))
				resultado = "nao ";
			else
				resultado = "acessou ";
		}
	}
	cout << resultado << cont << endl;
	entrada.close();
return 0;
}

