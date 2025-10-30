//semana 11, ex 1
#include <iostream>
using namespace std;

struct ponto {
	int X, Y;
};

struct areaRetangulo {
	ponto v1, v2;
};

int main() {
	//pontos da coord P
	ponto P;
	cin >> P.X >> P.Y;
	
	int qRetangulos = 0;
	cin >> qRetangulos;
	
	areaRetangulo *retangulos = new areaRetangulo[qRetangulos];
	
	for (int i = 0; i < qRetangulos; i++) {
		cin >> retangulos[i].v1.X >> retangulos[i].v1.Y;
		cin >> retangulos[i].v2.X >> retangulos[i].v2.Y;
	}

	int retNoPonto = 0;

	for (int i = 0; i < qRetangulos; i++) {
		if ((retangulos[i].v1.X <= P.X) and (retangulos[i].v1.Y <= P.Y)
			and (retangulos[i].v2.X >= P.X) and (retangulos[i].v2.Y >= P.Y)) {
				retNoPonto++;
			}
	}
	
	cout << retNoPonto << endl;

	delete [] retangulos;

	return 0;
}
