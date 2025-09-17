//semana 4, ex 4
#include <iostream>

using namespace std;
int main () 
{
    int idade, kg, risco;

    cin >> idade >> kg;

    //idade menor que 20
    if (idade < 20){
        if (kg < 60){
            risco = 9;
        }
        else if ((kg >= 60) and (kg <= 90)){
            risco = 8;
        }
        else if (kg > 90){
            risco = 7; 
        }
    }
    //idade entre 20 a 50 anos
    else if ((idade >= 20) and (idade <=50)) {
         if (kg < 60){
            risco = 6;
        }
        else if ((kg >= 60) and (kg <= 90)){
            risco = 5;
        }
        else if (kg > 90){
            risco = 4; 
        }
    }

    //idade maior que 50
    else if (idade > 50){
         if (kg < 60){
            risco = 3;
        }
        else if ((kg >= 60) and (kg <= 90)){
            risco = 2;
        }
        else if (kg > 90){
            risco = 1; 
        }
    }
    
    cout << risco << endl;
    return 0;
}