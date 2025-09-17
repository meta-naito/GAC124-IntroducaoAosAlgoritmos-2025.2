//semana 4, ex 8
#include <iostream>
using namespace std;

int main()
{
	float horaEx, horaF, minutos, H;
	int premio;
	
	cin >> horaEx >> horaF;
	
	H = (horaEx - (2/3*horaF));
	minutos = H*60;
	
	if (minutos > 2400) {
		premio = 500;
	}
	else if ((minutos > 1800) and (minutos <= 2400)) {
		premio = 400;
	}
	else if ((minutos > 1200) and (minutos <= 1800)) {
		premio = 300;
	}
	else if ((minutos > 600) and (minutos <= 1200)) {
		premio = 200;
	}
	else {
		premio = 100;
	}
	
	cout << premio << endl;
	
return 0;
}
