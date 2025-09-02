//semana 4, ex 3
//honestamente nao sei se colocar .0 nas coisas fazem os numeros virarem float slaKKKKK
#include <iostream>

using namespace std;
int main()
{
    float notaLab, notaSem, notaFim, media;
    string conceito;

    cin >> notaLab >> notaSem >> notaFim;

    media = ((notaLab*2)+(notaSem*3)+(notaFim*5))/10;

    if ((media >= 0.0) and (media < 5.0)) {
        conceito = "E";
    }

    else if ((media >= 5.0) and (media < 6.0)) {
        conceito = "D";
    }

    else if ((media >= 6) and (media < 7)) {
        conceito = "C";
    }

    else if ((media >= 7) and (media < 8)) {
        conceito = "B";
    }

    else if ((media >= 8) and (media <= 10)){
        conceito = "A";
    }

    cout << media << endl << conceito <<endl;
    return 0;
}