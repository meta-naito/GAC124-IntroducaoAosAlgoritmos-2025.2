#include <iostream>
using namespace std;

int main(){
	char monstro, numMonstro, dias;
	int andar, corredor, quartoFinal; //para fazer o numero do quarto so usa o cout sem o endl entre os numeros

	cin >> monstro >> numMonstro >> dias;
	
	//determinar o andar
	switch (monstro) {
		case 'z':
		case 'm':
			andar = 1;
			break;
		case 'l':
		case 'd':
			andar = 2;
			break;
		case 'h':
		case 's':
			andar =3;
			break;
		default:
			andar = 4;
	}
	//determinar o corredor
		switch (numMonstro) {
			case '1':
				corredor = 1;
				break;
			case '2':
				corredor = 2;
				break;
			default:
				corredor = 3;
		}
	//determinar o quarto
		switch (dias) {
			case '1':
			case '2':
				quartoFinal = 1;
				break;
			case '3':
			case '4':
				quartoFinal = 2;
				break;
			case '5':
			case '6':
				quartoFinal = 3;
				break;
			default:
				quartoFinal = 4;
		}
	
	cout << andar << corredor << quartoFinal << endl;
	
	return 0;
}
/*
quartos de hotel sao assim : centena = andar; dezena = corredor; unidade = quarto

CLASSIFICAÇÃO DOS MONSTROS:
	zumbi (z) e mumia (m) sempre no primeiro andar (1xx)
	lobisomens (l) e duendes (d) sempre no segundo andar (2xx)
	harpias (h) e sucubus (s) sempre no terceiro andar (3xx)
	vampiros (v) e fantasmas (f) sempre no 4 andar (4xx)

CORREDORES: 
	1 so: corredor 1 (x1x)
	casal: corredor 2 (x2x)
	3 ou mais: corredor 3 (x3x)
	
QUARTOS:
	um ou dois dias: quarto final 1 (xx1)
	tres a quatro dias: quarto final 2 (xx2)
	cinco ou seis dias quarto final 3 (xx3)
	uma semana (sete dias) ou mais: quarto final 4 (xx4)
*/
