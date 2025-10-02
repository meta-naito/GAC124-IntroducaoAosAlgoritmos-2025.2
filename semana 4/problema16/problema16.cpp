//semana 4, ex 16
#include <iostream>
using namespace std;
int main()
{
	float num1, num2, num3, num4, numMaior, numSeg;
	
	cin >> num1 >> num2 >> num3 >> num4;
	
	//num1 sendo o maior numero 
	if ((num1 > num2) and (num1 > num3) and (num1 > num4)) 
	{
		numMaior = num1;
		if ((num2 > num3) and (num2 > num4)) {
		numSeg = num2;
		}
		else if ((num3 > num2) and (num3 > num4)) {
		numSeg = num3;
		}
		else if ((num4 > num2) and (num4 > num3)) {
		numSeg = num4;
		}
	}
	//num2 sendo o maior numero
	else if ((num2 > num1) and (num2 > num3) and (num2 > num4)) {
		numMaior = num2;
		if ((num1 > num3) and (num1 > num4)) {
		numSeg = num1;
		}
		else if ((num3 > num1)) {
		numSeg = num3; }
		else if ((num4 > num1)) {
		numSeg = num4;
		}
	}
	//num3 sendo o maior numero
	else if ((num3 > num1) and (num3 > num2) and (num3 > num4)) {
		numMaior = num3;
		if ((num1 > num2) and (num1 > num4)) {
		numSeg = num1;
		}
		else if ((num2 > num1)) {
		numSeg = num2;
		}
		else if ((num4 > num1)) {
		numSeg = num4;
		}
	}
	//num4 sendo o maior numero
	else if ((num4 > num1) and (num4 > num2) and (num4 > num3)) {
		numMaior = num4;
		if ((num1 > num2) and (num1 > num3)) {
		numSeg = num1;
		}
		else if ((num2 > num1)) {
		numSeg = num2;
		}
		else if ((num3 > num1)) {
		numSeg = num3;
		}
}
	cout << numMaior << endl;
	cout << numSeg << endl;

	return 0;
}
