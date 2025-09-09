//semana 4, ex 6
//TE ODEIO COSSENO DE 90 SERIO
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
		angRad = M_PI*ang/180.0;
	}
	//se tipoAng já é r (radianos)
	else {
		angRad = ang;
	}

	//calculo do anguloooo
	if (func == 's') {
		if (ang != 90){
			numFinal = sin(angRad);
		}
		else {
			numFinal = 0;
		}
	}
	else {
		numFinal = cos(angRad);
	}
		
	cout << numFinal << endl;
	
return 0;
}
