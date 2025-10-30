## Q17:
Faça um programa que receba o salário​ base de um funcionário, calcule e mostre o seu salário a receber, mostrando descontos e adicionais. Você receberá da entrada os seguintes valores: salário base, gratificação e percentual de imposto sobre o salário base. Escreva no arquivo holerite.txt os seguintes dados: valor total bruto, valor do desconto, valor líquido a ser recebido. Utilize fixed e setprecision() para imprimir os valores com duas casas decimais.

Entradas:

    Valor do salário base do funcionário (float).
    Valor da gratificação do funcionário (float).
    Percentual do imposto sobre o salário base do funcionário (float).

Saídas (arquivo holerite.txt):

    Salário final bruto (salário + gratificação)
    Valor do desconto com imposto
    Salário final líquido

Exemplo de Entrada:

920
80
15

Exemplo de Saída (arquivo holerite.txt):

1000.00
150.00
850.00

Exemplo de Entrada:

3210
50
25


##Q18:
O cálculo de resto de uma divisão inteira tem uma grande importância na criptografia moderna. Vários dos métodos são baseados em propriedades envolvendo restos de divisão por números primos, inclusive.

Nesta atividade, seu objetivo é implementar um método bastante simples para codificar um valor. Você irá receber um valor, a partir da entrada padrão e, na sequência, ler três números primos em um arquivo de entrada denominado chaves.txt. Na sequência, você irá calcular o resto da divisão do valor inicial por cada um dos valores primos, escrevendo o resultado no arquivo codigo.txt.

Entrada padrão:

    Um valor inteiro positivo qualquer.

Entrada pelo arquivo chaves.txt:

    Três números primos.

Saídas (arquivo codigo.txt):

    Resto da divisão do valor fornecido na entrada padrão por cada um dos números primos informados.

Exemplo de Entrada:

920

Exemplo de Arquivo chaves.txt:

3
5
7

Exemplo de Saída (arquivo codigo.txt):

2
0
3

Exemplo de Entrada:

11234

Exemplo de Arquivo chaves.txt:

7
11
13

Exemplo de Saída (arquivo codigo.txt):

6
3
2


##Q19:
Implemente um programa que receba no arquivo tempo.txt um número que represente o tempo em milissegundos que se passou desde as 00 : 00 : 00 (HORAS : MINUTOS : SEGUNDOS) horas de um dia. O seu programa deve imprimir no arquivo horario.txt a hora representada por este número de milissegundos.

Entrada (arquivo tempo.txt):

    Número inteiro representando o tempo em milissegundos.

Saída (arquivo horario.txt):

    Tempo convertido para o formato "HORAS:MINUTOS:SEGUNDOS", conforme essa formatação (itens separados por dois pontos), em que HORAS e MINUTOS são números inteiros e SEGUNDOS um número em ponto flutuante.

Exemplo de Entrada (arquivo tempo.txt):

3600001

Exemplo de Saída horario.txt:

1:0:0.001

Exemplo de Entrada (arquivo tempo.txt):

8746900

Exemplo de Saída horario.txt:

2:25:46.9


##Q20:
Faça um programa para uma loja de tintas. O programa deverá receber, em um arquivo entrada.txt o tamanho em metros quadrados da área a ser pintada e o valor do galão de tinta. Considere que o rendimento da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros. Feito isso, informe ao usuário, no arquivo saida.txt a quantidade de latas de tinta a serem compradas e o preço total.

Dicas: utilize a biblioteca cmath e a função ceil(); utilize a biblioteca iomanip, e as funções fixed e setprecision().

Entradas (arquivo entrada.txt):

    Uma linha contendo um número inteiro que indica a área em metros quadrados a ser pintada .
    Uma linha contendo um número em ponto flutuante que indica o valor do galão de tinta.

Saídas (arquivo saida.txt):

    Uma linha com um inteiro que representa a quantidade de latas de tinta a serem compradas.
    Uma linha com um valor em ponto flutuante com duas casas decimais que representa o valor a ser pago pela tinta.

Exemplo de Entrada (arquivo entrada.txt):

145
80.0

Exemplo de Saída (arquivo saida.txt):

3
240.00


##Q21:
As coordenadas geográficas expressam de forma exata em graus a posição de qualquer ponto na superfície do globo terrestre. A medida de grau possui duas notações, grau em notação sexagesimal (grau, minuto e segundo) e grau em notação decimal. A notação sexagesimal é obtida a partir da notação decimal da seguinte maneira:
O Grau corresponde ao valor da parte inteira da notação decimal.
O minuto é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, pegando somente a parte inteira deste resultado.
O segundo é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, e multiplicando a parte fracionária deste resultado por 60.

Faça um programa para calcular os graus, minutos e segundos de um valor inserido pelo usuário na notação de grau em decimal, armazenando o resultado em um arquivo coordenadas.txt.

Entradas:

    Grau em notação decimal (valor em ponto flutuante)

Saídas (arquivo coordenadas.txt):

    Grau em notação sexagesimal: grau, minuto, segundo. Os valores exibidos são inteiros, um em cada linha.

Exemplo de Entrada:

48.764169

Exemplo de Saída (arquivo coordenadas.txt):

48
45
51


##Q22:
O dia dos namorados está chegando e você quer presentear a sua linda e querida namorada com o que ela mais gosta: doces! E, para variar, ela gosta dos presentes mais caros e menos dos mais baratos.

Tabela de preços dos doces:

    Caixa de chocolate - R$ 13,50
    Trufa de chocolate - R$ 2,50
    Pacotinho de Jujuba - R$ 1,50
    Drops de hortelã - R$ 1,00
    Bala de morango - R$ 0,25

Desenvolva um programa para, a partir de uma certa quantia de dinheiro, calcule quantas caixas de chocolate, quantas trufas, quantos pacotinhos de jujuba, quantos drops e quantas balas de morango ela irá ganhar no dia dos namorados. O resultado deve ser armazenado no arquivo doces.txt.

Entradas:

    A entrada consiste em um linha contendo um número real (ponto flutuante) que representa a quantidade de dinheiro que o namorado tem para comprar os doces.

Saídas (arquivo doces.txt:

    Seu programa deve imprimir no arquivo, um em cada linha: o valor do dinheiro gasto pelo namorado, o número de caixas de chocolate, de trufas, de pacotinhos de jujuba, de drops e de balas de morango. O valor do dinheiro gasto pelo namorado deve ser formatado utilizando duas casas decimais. Para isso, utilize a biblioteca iomanip e as funções fixed e setprecision().

Exemplo de Entrada:

36.25

Exemplo de Saída (arquivo doces.txt):

36.25
2
3
1
0
1

Exemplo de Entrada:

50.00

Exemplo de Saída (arquivo doces.txt):

50.00
3
3
1
0
2

Exemplo de Entrada:

15.60

Exemplo de Saída (arquivo doces.txt):

15.50
1
0
1
0
2


##Q23:
Faça um programa que receba como um entrada um número inteiro N de 6 algarismos, tal que 100000 <= N <= 999999, e a partir dele calcule um novo número inteiro M de 5 algarismos. O dado será lido do arquivo entrada.txt e o resultado será gravado no arquivo saida.txt.

O valor de M será calculado a partir da divisão inteira dos algarismos de N. O 1º algarismo de M será o resultado da divisão inteira do 1º algarismo de N pelo 2º algarismo de N; o 2º algarismo de M será o resultado da divisão inteira do 2º algarismo de N pelo 3º algarismo de N, e assim sucessivamente. Atente-se ao fato de que, ao final, M será um único número inteiro de cinco algarismos.

Obs: considere que o número N não tem nenhum algarismo igual a zero e que o número M gerado terá sempre 5 algarismos (ou seja, nunca começará com zero).

Entradas (arquivo entrada.txt):

    Um número inteiro N de seis algarismos.

Saídas (arquivo entrada.txt):

    Um número inteiro M de cinco algarismos calculado conforme o enunciado.

Exemplo de Entrada (arquivo entrada.txt):

918273

Exemplo de Saída (arquivo saida.txt):

90402

Exemplo de Entrada (arquivo entrada.txt):

854221

Exemplo de Saída (arquivo saida.txt):

11211


##Q24:
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba, em um arquivo dados.txt, o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e escreva num arquivo custo.txt: a) O valor correspondente ao lucro do distribuidor; b) O valor correspondente aos impostos; c) O preço final do veículo.

A saída deve ser formatada utilizando duas casas decimais. Para isso, utilize a biblioteca iomanip e as funções fixed e setprecision().

Entradas (arquivo dados.txt):

    Preço de fábrica (float).
    Percentual de lucro do distribuidor (float).
    Percentual de impostos (float).

Saídas (custo.txt):

    O valor correspondente ao lucro do distribuidor.
    O valor correspondente aos impostos.
    O preço final do veículo.

Exemplo de Entrada (arquivo dados.txt):

25000.00
0.15
0.05

Exemplo de Saída custo.txt:

3750.00
1250.00
30000.00


##Q25:
Ao vender os produtos à prazo, uma determinada loja cobrava 10% de acréscimo no valor do produto. Como os clientes começaram a reclamar, o dono do comércio disse que não cobraria mais acréscimos. Mas os boletos já estavam todos impressos; ele então ordenou aos funcionários que dessem 10% de desconto sobre o valor da prestação na hora que os clientes fizessem o pagamento. Os funcionários discutiram entre si que o dono deveria ter faltado às aulas de matemática na escola, mas quando tentaram argumentar ele não aceitou. Portanto, eles cumpriram a ordem.

Faça um programa que receba no arquivo venda.txt o valor à vista de um produto e o número de prestações (um em cada linha). Calcule e imprima no arquivo cliente.txt: i) o total que um cliente pagaria para a loja antes da reclamação dos clientes; ii) o valor de cada prestação antes da reclamação; iii) o valor atualizado de cada prestação; e iv) o valor total a ser pago pelo cliente.

Dicas: utilize a biblioteca cmath e a função ceil(); utilize a biblioteca iomanip, e as funções fixed e setprecision()

Entradas (arquivo venda.txt):

    Valor à vista do produto (número real).
    Quantidade de prestações.

Saídas (arquivo cliente.txt):

    Valor total que o cliente pagaria antes das reclamações.
    Valor de cada prestação antes da reclamação.
    Valor atualizado de cada prestação.
    Valor total que o cliente deverá pagar depois da ordem do dono.

Exemplo 1:

Exemplo de Entrada (arquivo venda.txt):

1200.0
10

Exemplo de Saída (arquivo cliente.txt):

1320.0
132.0
118.8
1188.0

Exemplo 2:

Exemplo de Entrada (arquivo venda.txt):

1000.0
4

Exemplo de Saída (arquivo cliente.txt):

1100.0
275.0
247.5
990.0

Exemplo 3:

Exemplo de Entrada (arquivo venda.txt):

99.9
2

Exemplo de Saída (arquivo cliente.txt):

109.89
54.95
49.46
98.92









