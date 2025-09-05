//semana 4, ex 12
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float vTrem1, vTrem2, dist, tempo;
	
	cin >> vTrem1 >> vTrem2 >> dist;
	
	tempo = (dist/(vTrem1+vTrem2));
	
	if (tempo <= 10) {
		cout << "COLISAO" << endl;
	}
	else {
		cout << setprecision(2) << fixed << tempo << endl;
	}
return 0;
}
