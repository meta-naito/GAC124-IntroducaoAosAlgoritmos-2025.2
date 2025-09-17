//semana 4, ex 11
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    bool genero;
	int idade;
	double tempoTrabalho, pedagio, tempoRestante, idadeAposento;

	cin >> genero >> idade >> tempoTrabalho;

	//mulher = 0
	if (genero == 0) {
		if (tempoTrabalho > 15){
			tempoRestante = 30 - tempoTrabalho;
            pedagio = tempoRestante*0.3;
			idadeAposento = idade + tempoRestante + pedagio;
		}
		//tempoTrabalho sendo igual ou menor que 15
		else {
			idadeAposento = 62;
		}
	}
	//homem = 1
	else {
		if (tempoTrabalho > 20) {
			tempoRestante = 35 - tempoTrabalho;
            pedagio = tempoRestante*0.3;
			idadeAposento = idade + tempoRestante + pedagio;
		}
		//tempoTrabalho sendo igual ou menor que 20
		else {
			idadeAposento = 65;
		}
	}

    cout << idadeAposento << endl;
	return 0;
}
/* ta, vou separar aqui em mulher e homem (ja faz isso no começo do codigo)
	mulher (0):
		se trabalha MAIS de 15 anos: tempo extra que é 30% do tempo restante de trabalho para 
		completar 30 anos de trabalho 
			NÃO É PRA SOMAR!!! o final seria assim = tempoTrabalho + 1.30*tempoRestante (o tempo + 30%)
		se trabalha MENOS de 15 anos OU 15 anos: aposentadoria por idade minima = 62 anos
	
	homem (1):
		se trabalha MAIS de 20 anos: tempo extra que é 30% do tempo restante de trabalho para 
		completar 35 anos de trabalho 
			NÃO É PRA SOMAR!!! o final seria assim = tempoTrabalho + 1.35*tempoRestante (o tempo + 35%)
		se trabalha MENOS de 20 anos OU 20 anos: aposentadoria por idade minima = 65 anos
	*/