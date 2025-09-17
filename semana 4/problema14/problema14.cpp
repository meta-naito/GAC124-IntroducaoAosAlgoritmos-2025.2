//semana 4, ex 14
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string cor1, cor2;
	int numTotal, num1, num2, num5, num6;
    const int erro = 0.00001;

	cin >> cor1 >> cor2 >> numTotal;

    //nem questiona, ta horrivel issoKKKKK
	num1 = numTotal/100000;
	num2 = (numTotal%100000)/10000;

	num5 = (numTotal%100000%10000%1000%100)/10;
	num6 = numTotal%100000%10000%1000%100%10;
	
    //fazendo certo as comparações entre floats!!
	if ((abs(num1 - num6) <= erro) and (abs(num2 - num5) <= erro)){
		cout << cor1 << endl;
	}
	else {
		cout << cor2 << endl;
	}

	return 0;
}
