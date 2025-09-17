//semana 5, ex 11
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int limiteA, limiteB, pontos;
	int competidores = 0;
	
	ifstream entrada("dados.txt");
	
	if (entrada){
		entrada >> limiteA >> limiteB;
			while (entrada >> pontos) {
				if ((pontos >= limiteA) and (pontos <= limiteB))
					competidores++;
			}
		}

	cout << competidores << endl;
	entrada.close();
	
	return 0;
}