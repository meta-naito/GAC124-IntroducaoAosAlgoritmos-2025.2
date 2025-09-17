//semana 2 de Ialg, ex 12
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main ()
{
    float c, k, f;

    cin >> c;
    k = c + 273;
    f = 1.8*c + 32;

    ofstream arquivo("temperatura.txt");
    arquivo << k << " K" << endl << f << " F" << endl;
    arquivo.close();
    return 0;
}
