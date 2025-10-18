//semana 6, ex 16
#include <iostream>
#include <cmath>
using namespace std;

double razaoAurea (int);

int main() {
    int termoRaiz = 0;

    cin >> termoRaiz;

    cout << razaoAurea(termoRaiz) << endl;

    return 0;
}

double razaoAurea(int r) {
    double phi = 0;

    for (int i = 0; i >= r; i++) {
        phi += sqrt(1);
    }


    return phi;
}