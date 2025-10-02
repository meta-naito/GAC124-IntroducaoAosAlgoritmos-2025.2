//semana 5, ex 20
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int n;
	
	cin >> n;
	ofstream saida("senha.txt");
	saida << n << " ";
	
	while (n >1){
		if (n % 2 == 0)
			n /= 2;
		else 
			n = n*3 +1;
		 
		saida << n << " ";
	 }
	
return 0;
}