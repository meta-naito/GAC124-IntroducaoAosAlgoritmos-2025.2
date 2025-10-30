//semana 11, ex 1
#include <iostream>
using namespace std;

struct ponto {
	int coordX, coordY;
};

struct areaRetangulo {
	ponto v1, v2;
};

int main() {
	//pontos da coord P
	ponto P;
	cin >> P.coordX >> P.coordY;
	
	int qRetangulos = 0;
	cin >> qRetangulos;
	
	areaRetangulo *retangulos = new areaRetangulo[qRetangulos];
	
	for (int i = 0; i < qRetangulos; i++) {
		cin >> retangulos[i].v1.coordX >> retangulos[i].v1.coordY;
		cin >> retangulos[i].v2.coordX >> retangulos[i].v2.coordY;
	}

	delete [] retangulos;

	return 0;
}
