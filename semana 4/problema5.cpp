//semana 4, ex 5
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	
	if (num4 <= num1) {
		cout << num4 << " " << num1 << " " << num2 << " " << num3 << endl;
	}
	else if ((num4 > num1) and (num4 <= num2)) {
		cout << num1 << " " << num4 << " " << num2 << " " << num3 << endl;
	}
	else if ((num4 > num2) and (num4 <= num3)) {
		cout << num1 << " " << num2 << " " << num4 << " " << num3 << endl;
	}
	else {
		cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
	}
	return 0;
}
