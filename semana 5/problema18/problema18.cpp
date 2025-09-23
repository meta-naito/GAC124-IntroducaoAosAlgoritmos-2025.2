//semana 5, ex 18
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int qPrimos, i = 0;
    
    cin >> qPrimos;

    ofstream saida("saida.txt");

    while (qPrimos > 0) {
        int divisor = 2, N = 2;
        bool primo = true;
        
            while (divisor <= N) {
                if (N % divisor == 0)
                    primo = false;
                divisor++;
            }
            if (primo) {
                saida << N << endl;
                qPrimos--;
                N++;
            }
        
    }

	return 0;
}
