//semana 6, ex 10
#include <iostream>
#include <cmath>
using namespace std;

double somaParcelas(int& nParcelas) {
    double somaParcelas = 0;

    for (int i = nParcelas; i >= 1; i--)
        somaParcelas += (double)i*(i + 1)/(i + 3);

    return somaParcelas;
}

int main() {
    int parcela = 0;

    cin >> parcela;

    cout << somaParcelas(parcela) << endl;

    return 0;
}
