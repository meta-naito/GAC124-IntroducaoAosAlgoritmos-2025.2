//semana 3, ex 3
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	float x1, y1, x2, y2, distancia;
	
    fstream entrada("entrada3.3.txt");
	entrada >> x1 >> y1 >> x2 >> y2;
    
	distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	cout << distancia << endl;
return 0;
}