//semana 5, ex 6
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float ingresso, preco, total = 0;
    int dia;
    char categoria; 

    ifstream entrada("ingresso.txt");
        entrada >> ingresso;

    while (entrada >> dia >> categoria) {
        if ((dia >= 6) and (dia <= 13)) {
            if (categoria == 'E')
                preco = ingresso * 0.85;
            else 
                preco = ingresso * 0.90;
        }
        else if ((dia >= 14) and (dia <= 24)) {
            if (categoria == 'E')
                preco = ingresso * 0.90;
            else
                preco = ingresso * 0.95;
        }
        else 
            preco = ingresso;
        
        total += preco;
    }
            
    cout << total << endl;

    return 0;
}
