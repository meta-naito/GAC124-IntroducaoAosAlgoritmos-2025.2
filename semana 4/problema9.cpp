#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	char func, tipoAng;
	float ang, angRad, numFinal;
	
	cin >> func >> tipoAng >> ang;
	//se tipoAng é g (graus)
	if (tipoAng == 'g') {
		angRad = ang*(M_PI/180);
	}
	//se tipoAng já é r (radianos)
	else {
		angRad = ang;
	}
	//calculo do anguloooo
	/*if (func == 's') {
		if ((angRad != 0)) or (angRad != M_PI) or (angRad != 2*M_PI)) {
		numFinal = sin(angRad);
		}
		else {
			numFinal = 0;
		}
	}*/
	if (func == 'c') {
		if ((angRad != M_PI_2) or (angRad != 3*M_PI_2)){
		numFinal = cos(angRad);
		}
		else {
			numFinal = 0;
		}
	}
	else {
		cout << "ERRO" << endl;
	}
		
	cout << numFinal << endl;
	
return 0;
}

//ta, primieor eu tenho que checar se a medida ta em graus ou radianos -> se tiver em graus, converta p rad/ se tiver ja em radianos, passa pra segunda pte
//a segunda pte é ver se é o seno ou cosseno q ta pedindo
//ee no final bum so imprime a contaKKKKK
