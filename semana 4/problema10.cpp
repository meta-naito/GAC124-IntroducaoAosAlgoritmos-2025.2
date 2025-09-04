#include <iostream>
using namespace std;

int main(){
	char monstro;
	int numMonstro, dias, andar, corredor, quartoFinal; //para fazer o numero do quarto so usa o cout sem o endl entre os numeros

	cin >> monstro >> numMonstro >> dias;
	
	//determinar o andar
	if ((monstro == 'z') or (monstro == 'm')){
		andar = 1;
	}
	else if ((monstro == 'l') or (monstro == 'd')){
		andar = 2;
	}
	else if ((monstro == 'h') or (monstro == 's')) {
		andar = 3;
	}
	else {
		andar =4;
	}
		//determinar o corredor
		if (numMonstro == 1){
			corredor = 1;
		}
		else if (numMonstro == 2){
			corredor = 2;
		}
		else {
			corredor = 3;
		}
		//determinar o quarto
			if (dias <= 2) {
				quartoFinal = 1;
			}
			else if ((dias >=3) and (dias <= 4)) {
				quartoFinal = 2;
			}
			else if ((dias >=5) and (dias <=6)) {
				quartoFinal = 3;
			}
			else {
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
