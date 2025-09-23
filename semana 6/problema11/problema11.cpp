//semana 6, ex 10
#include <iostream>
using namespace std;

void calcPiramide (int num){
	int algumaCoisa = 1, outraCoisa;
	
	while (algumaCoisa <= num) {
		outraCoisa = 1;
		
		while (outraCoisa <= algumaCoisa) {
			if (outraCoisa%2 == 0)
				cout << "=";
			else
				cout << "*";
			outraCoisa++;
		}
		cout << endl;
		algumaCoisa++;
	}
}

int main(){
	int num;
	
	cin >> num;
	calcPiramide(num);
	
return 0;
}
