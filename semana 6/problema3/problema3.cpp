//semana 6, ex 3
#include <iostream>
using namespace std;

float cmPm(float& d) {
    float cmPm;
    cmPm = d / 100;

    return cmPm;
}

float mPcm(float& d) {
    float mPcm;
    mPcm = d * 100;
    
    return mPcm;
}

int main () {
    float distancia;
    string unidade;

    cin >> distancia >> unidade;

    if (unidade == "centimetro") 
        cout << mPcm(distancia) << " cm" << endl;

    else if (unidade == "metro")
        cout << cmPm(distancia) << " m" << endl;

    else 
        cout << "ERRO" << endl;

    return 0;
}