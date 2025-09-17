//semana 5, ex 3
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	int num, mersenne, n = -1;
    bool tudoOK = true;
    
    ifstream entrada("entrada.txt");
    entrada >> num;

    do {
        n++;
        mersenne = (pow(2,n) - 1);
        if (mersenne == num)
            tudoOK = false;
    } while (tudoOK);

    cout << mersenne << endl;

	return 0;
}
