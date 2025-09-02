//semana 4, ex 1
#include <iostream>

using namespace std;
int main ()
{
    int ano;
    bool simBissexto = true, naoBissexto = false;

    cin >> ano;
    if (ano%400 == 0){
        cout  << simBissexto << endl;
    }
    else if ((ano%4 == 0) and (ano%100 != 0)){
        cout << simBissexto << endl;
    }
    else {
        cout << naoBissexto << endl;
    }
    return 0;
}