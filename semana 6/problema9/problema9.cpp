//semana 6, ex 9
#include <iostream>
#include <cmath>
using namespace std;

int arrendondamento(float N) {
    int unidade = (int)N % 10, arrendondamento = 0;

    if (unidade % 2 == 0)
        arrendondamento = ceil(N);
    else
        arrendondamento = floor(N);

    return arrendondamento;
}

int main() {
    float num = 0;

    cin >> num;

    cout << arrendondamento(num) << endl;

    return 0;
}
