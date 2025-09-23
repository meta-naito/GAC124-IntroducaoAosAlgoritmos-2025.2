//semana 6, ex 1
#include <iostream>
using namespace std;

void piramide (int num) {
	int aux = 1, aux2;
	
	while (aux <= num) {
		aux2 = 1;
		
		while (aux2 <= aux) {
			cout << aux2 << " ";
			aux2++;
		}
		
		cout << endl;
		aux++;
	}
}

int main () {
	int num;
	
	cin >> num;
	piramide(num);

	return 0;
}
