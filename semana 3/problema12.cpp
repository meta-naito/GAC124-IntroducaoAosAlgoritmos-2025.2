//semana 3, ex 12
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    float profundidade, altura, largura, densidade, pesoMartelao;

    ifstream entrada("entrada12.3.txt");
    entrada >> profundidade >> altura >> largura >> densidade;

    pesoMartelao = profundidade*altura*largura*densidade;

    cout << setprecision(1) << fixed << pesoMartelao;
    entrada.close();

    return 0;
}