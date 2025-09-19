//semana 5, ex 12
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	string chapa1, chapa2, localVotacao, vencedor;
	int qChapa1, qChapa2, somaChapa1 = 0, somaChapa2 = 0, somaVencedor;
	float porcentagem;
	
	ifstream entrada("eleicao.txt");
		entrada >> chapa1 >> chapa2;
		while (entrada >> localVotacao >> qChapa1 >> qChapa2) {
			somaChapa1 += qChapa1;
			somaChapa2 += qChapa2;
		}
	
	if (somaChapa1 > somaChapa2) {
		somaVencedor = somaChapa1;
		vencedor = chapa1;
	}
	else {
		somaVencedor = somaChapa2;
		vencedor = chapa2;
	}

	porcentagem = ((float)somaVencedor/(somaChapa1 + somaChapa2))*100;
	
	cout << vencedor << endl << somaVencedor << endl << setprecision(2) 
	<< fixed << porcentagem << endl;
	entrada.close();
	
	return 0;
}

/* enquanto tem no arquivo dados do local da vot, a quantidade de votos da chapa 1
 * e da chapa 2 = soma a quantidade de votos na soma de cada chapa
 * ai termina o while, e tem que fazer if
 * SE a soma da chapa 1 é maior doq a soma da chapa 2, vencedor = chapa1
 * caso contrario, vencedor = chapa 2
 * a porcentagem é a soma da chapa vencedora dividido pela quantidade de votos e
 * por fim, multiplicado por cem pra dar certinho :p
*/
