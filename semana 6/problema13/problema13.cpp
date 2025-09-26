//semana 6, ex 13
#include <iostream>
#include <cmath>
using namespace std;

int minSono (int h1, int m1, int h2, int m2) {
    int minSono = 0;
    int totalDia = 1440; //24 horas em minutos babyyyyy

    //transformando horas em minutos
    int tempoInicial = (h1 * 60) + m1;
    int tempoFinal = (h2 * 60) + m2;

    if (h2 < h1)
        tempoFinal += totalDia;

    if (())
        
    minSono = tempoFinal - tempoInicial;

    return abs(minSono);
}

int main () {
    int horaInicial, minutoInicial;
    int horaFinal, minutoFinal;

    cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;
  
    while ((horaInicial != 0) or (minutoInicial != 0) or (horaFinal != 0) or (minutoFinal != 0)) {
        cout << minSono (horaInicial, minutoInicial, horaFinal, minutoFinal) << endl;
        cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;
    }

    return 0;
}
