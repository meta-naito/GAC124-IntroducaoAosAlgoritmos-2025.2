#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// ISSO É PARA O 9!!!!	
// <iomanip>, usa o setprecision, e em parenteses coloca a quantidade de casas decimais
// dps << fixed << (p nao virar casa cientifica???), e dps do segundo "<<" coloca a variavel!!

int main(){
	float largura, altura, area, litros;
	cin >> largura >> altura;
	
	area = 3*(largura*altura);
	
	litros = area/2;
	cout << setprecision(2) << fixed << litros << " Litros" << endl;
	
    return 0;
}

// PARA O 10!!!! vvv
// biblioteca <fstream> manipula arquivos
// twem que usar a linha ifstream arquivoEntrada <- [declaracao de variavel] [arquivoEntrada faz com que a gnt use info do arqauivo mesmo!!] ("nome do arquivo.extensao")
// ai tu tem que declarar uma variavel e dps usar arquivoEntrada >> (outra variavel)
// usa na parte de declarar o nome do arquivo como nomeArquivo para que o usuario digite o nome do arquivo e apareca as informações
