////dinâmica - teste de mesa 2
#include <iostream>
using namespace std;

int main ()
{
    float temperatura;
    string classificacao;

    cin >> temperatura;

    if (temperatura < 10){
        classificacao = "Muito frio";
    }
    else if ((temperatura >= 10) and (temperatura <= 20)){
        classificacao = "Frio";
    }
    else if ((temperatura >= 21) and (temperatura <= 30)){
        classificacao = "Agradável";
    }
    else if ((temperatura >= 31) and (temperatura <= 40)){
        classificacao = "Quente";
    }
    else if (temperatura > 40){
        classificacao = "Muito quente";
    }

    cout << classificacao << endl;

    return 0;
}