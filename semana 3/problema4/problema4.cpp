//semana 3, ex 4
#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
    int num, uni, dez, cen;

    cin >>num;

    cen = num/100;
    dez = ((num-(cen*100))/10);
    uni = ((num-(cen*100))-(dez*10));
    cout << uni+dez+cen;

    ofstream arquivo ("saida.txt");
    arquivo << uni*dez*cen << endl;
    arquivo.close();
    return 0;   
}
