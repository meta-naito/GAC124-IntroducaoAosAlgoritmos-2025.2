## Q14 (incompleto!):
Faça um programa que leia um vetor com 7 inteiros. O programa deverá ainda ler um número inteiro N e verificar se existe dentro do vetor três números cujas somas sejam iguais a N. Você foi informado que caso exista mais de uma alternativa, para dar preferência àquela que use valores iniciais do vetor (e imprimir apenas essa).

Obs: Caso não existam três números que satisfaçam a soma, deverá ser impresso apenas -1.

Entradas:

    Elementos do vetor.
    Número inteiro N.

Saídas:

    Os três números utilizados ou -1 caso a soma não seja possível.

Exemplo de Entrada:

1 2 3 4 5 1 1
12

Exemplo de Saída:

3 4 5

Exemplo de Entrada:

1 2 3 4 5 4 4
13

Exemplo de Saída:

4 5 4

Exemplo de Entrada:

1 2 3 4 5 4 4
15

Exemplo de Saída:

-1

## Q15:
Na matemática a união de dois conjuntos A e B é representada por A ∪ B e é formada por todos os elementos pertencentes a A ou B. Por exemplo, seja A = {1, 2, 3} e B = {4, 5}, então a união destes dois conjuntos será A ∪ B = {1, 2, 3, 4, 5}, porém caso um elemento esteja em ambos os conjuntos ele não irá aparecer duas vezes no conjunto união, por exemplo, seja A = {1, 2, 3} e B = {1, 2, 4}, assim a união será A ∪ B = {1, 2, 3, 4}.

Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a união.

Entradas:

    Elementos do vetor A.
    Elementos do vetor B.

Saídas:

    Vetor C representado a união dos vetores A e B.

Exemplo de Entrada:

0 1 2 3 4
2 4 6 8 10

Exemplo de Saída:

0 1 2 3 4 6 8 10

## Q16:
Na matemática a interseção de dois conjuntos A e B é representada por A ∩ B e é formada por todos os elementos pertencentes a A e B ao mesmo tempo. Por exemplo, seja A = {1, 2, 3} e B = {1, 4, 5}, então a interseção destes dois conjuntos será A ∩ B = {1}. Um outro exemplo é dado por A = {1, 2, 3, 4} e B = {1, 2, 4, 5, 3}, com interseção dada por A ∩ B = {1, 2, 3, 4}. Caso A e B sejam dadas por A = {1, 2, 3, 4} e B = { 5, 6, 7}, então a interseção seja dada por A ∩ B = { }.

Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a interseção desses vetores.

Entradas:

    Elementos do vetor A.
    Elementos do vetor B.

Saídas:

    Vetor C representado a interseção dos vetores A e B. Caso a interseção seja vazia, imprima VAZIO.

Exemplo de Entrada:

0 1 2 3 4
2 4 6 8 10

Exemplo de Saída:

2 4

Exemplo de Entrada:

0 1 2 3 4
5 6 7 8 9

Exemplo de Saída:

VAZIO

## Q17:
Na matemática a diferença do conjunto B para o conjunto A é representada por A - B e é formada por todos os elementos pertencentes a A que não pertencem a B. Por exemplo, seja A = {1, 2, 3} e B = {1, 4, 5}, então a diferença de B para A será A - B = {2, 3}. Um outro exemplo é dado por A = {1, 2, 3, 4} e B = {1, 2, 4, 5, 3}, com diferença dada por A - B = { }. Caso A e B sejam dadas por A = {1, 2, 3, 4} e B = {5, 6, 7}, então a diferença será dada por A - B = {1, 2, 3, 4}.

Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a diferença A - B desses vetores.

Entradas:

    Elementos do vetor A.
    Elementos do vetor B.

Saídas:

    Vetor C representado a diferença A - B. Caso a diferença seja vazia, imprima VAZIO.

Exemplo de Entrada:

0 1 2 3 4
5 6 7 8 9

Exemplo de Saída:

0 1 2 3 4

Exemplo de Entrada:

0 1 2 3 4
3 4 5 6 7

Exemplo de Saída:

0 1 2

Exemplo de Entrada:

0 1 2 3 4
0 1 2 3 4

Exemplo de Saída:

VAZIO

## Q18:
Faça um programa que leia um vetor de 10 números inteiros, encontre e escreva o maior e o menor elemento e suas respectivas posições. No caso do maior ou menor elemento aparecerem mais de uma vez no vetor, informe a primeira ocorrência

Entradas:

    cada elemento do vetor

Saídas:

    o maior valor do vetor
    o índice do maior valor do vetor
    o menor valor do vetor
    o índice do menor valor do vetor

É obrigatório que a leitura de todos os elementos do vetor seja feita antes do processamento dos elementos do vetor.

Exemplo de entrada:

1 2 5 7 3 0 99 9 -2 11

Exemplo de saída:

99 6
-2 8

Exemplo de entrada:

1 2 5 3 2 1 0 4 5 0

Exemplo de saída:

5 2
0 6

## Q19:
Dados dois vetores x e y, ambos com 5 elementos, determinar o produto escalar desses vetores.

Para calcular o produto escalar utilize a seguinte fórmula:
        n
A ⋅ B = ∑    a^i b^i = a^1 b^1 + a^2 b^2 + ⋯ + a^n b^n
     (i = 1)

Entrada:
A primeira linha será os 5 valores de cada posição do primeiro vetor. A segunda linha será os 5 valores de cada posição do segundo vetor.

Exemplo de entrada:
2.2 3.5 1 2.8 1.6
1.2 6.5 3 2 1.65

Saída:
A saída dever ser composta de apenas uma linha contendo o valor do produto escalar.

Exemplo de saída:
36.63

## Q20:
Em estatística, moda é o valor que ocorre com maior frequência num conjunto de dados, não sendo necessariamente única. Por exemplo a série {1, 3, 5, 5, 6, 6} apresenta 2 modas: 5 e 6.
Faça um programa que leia um arquivo denominado "entrada.txt", contendo um vetor com 10 valores inteiros. O programa deverá escrever no arquivo "saida.txt" quantas e quais as modas do vetor.

Dica: construa um vetor auxiliar para marcar quantos elementos daquela posição existem no vetor, marcando as repetições com -1. Utilize depois esse vetor para ver é o maior valor, bem como para imprimir as posições do vetor principal com o maior valor.
Exemplos de Entrada e Saída em arquivo:

Exemplo de entrada no arquivo "entrada.txt":
2 4 1 10 4 2 1 9 8 7

Exemplo de saída no arquivo "saida.txt":
3
2 4 1

## Q21:
Uma professora passou uma lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu número de matrícula. Alguns alunos contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram os números de matrícula de seus amigos fujões. O problema é que muitos alunos são amigos de alunos que fogem da aula e alguns números de matrícula acabaram sendo repetidamente inseridos na lista de presença. Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam!

A professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar um voto de confiança e dar presença a todos os alunos cujos números de matrícula estavam na lista. Como são muitos alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam presença na aula. A lista de presença, no arquivo entrada.txt, contém 15 posições, sendo que as posições não utilizadas são preenchidas com 0. Portanto, as entradas com 0 devem ser descartadas.

Entradas (arquivo entrada.txt):

Contém até 15 números de matrícula (número inteiro) que foram inseridos na lista de presença. As linhas faltantes são preenchidas com zeros.

Saídas:

Seu programa deve escrever uma única linha, contendo apenas um número inteiro: o número de alunos que receberam presença.

Exemplo de entradas:

1
4
12
13
11
13
9 
4
6
11
13
12
0
0
0

Exemplo de saída:

7

## Q22:
Faça um programa que receba o preço de 15 produtos a partir de um arquivo valores.txt em um vetor V. Em seguida, o programa receberá um valor inteiro M (M <= N) e uma sequência de M números inteiros, que correspondem aos índices do vetor V (ou seja, os valores da sequência variam entre 0 e N-1). Além disso, também receberá um multiplicador para atualizar o preços nessas posições. O programa deverá multiplicar por esse multiplicador os valores do vetor V correspondentes aos índices lidos na sequência.

Entrada:

    15 números reais a serem colocados em um vetor no arquivo valores.txt);
    Valor inteiro M (M<=N);
    Sequência de M números inteiros (valores entre 0 e N-1), posições do vetor;
    Valor do reajuste.

Saída:

    Vetor V com os valores alterados.

Exemplo de entrada (arquivo valores.txt):

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

Exemplo de entrada (entrada padrão):

4
0 1 2 5
1.5

Exemplo de saída:

1.5 3 4.5 4 5 9 7 8 9 10 11 12 13 14 15

Exemplo de entrada (arquivo valores.txt):

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

Exemplo de entrada (entrada padrão):

7
1 3 5 7 9 11 13
0.5

Exemplo de saída:

1 1 3 2 5 3 7 4 9 5 11 6 13 7 15 