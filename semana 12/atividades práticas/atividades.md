
## Questão 1: Vetor – Compactação de vetor - alocação dinâmica - redimensionamento

Faça um programa que leia um vetor de inteiros A de dez posições, alocado dinamicamente. Em seguida, compacte o vetor, retirando os valores nulos e negativos. O vetor deve ser redimensionado a cada valor retirado e os valores restantes são movidos para a esquerda. Exibir como saída o vetor resultante com somente os valores restantes. O vetor deve conter pelo menos um valor positivo.

Entradas:

    Vetor de números inteiros com dez posições.

Saídas:

    O mesmo vetor mostrando os valores restantes.

Exemplo de entrada:

5 3 0 4 -4 7 8 1 10 0

Exemplo de saída:

5 3 4 7 8 1 10

## Questão 2: Ponteiros - Subtração de vetores de caracteres - alocação dinâmica - redimensionamento

Escreva um programa que leia duas cadeias de caracteres de tamanhos N e M informados pelo usuário e armazene em vetores de char alocados dinamicamente. Em seguida, altere a primeira cadeia para retirar todos os caracteres que estão também na segunda cadeia. Deverá ser utilizado redimensionamento do primeiro vetor, reduzindo em uma posição, cada vez que um caracter é retirado.

No final, imprima o primeiro vetor. Caso os 2 vetores sejam igual, deve ser impresso "Vetores iguais".

Entradas:

    Numero de elementos do primeiro vetor
    Elementos do primeiro vetor
    Numero de elementos do segundo vetor
    Elementos do segundo vetor

Saídas:

    Vetor resultante com os caracteres do primeiro vetor que não se encontram no segundo.

Exemplo de Entrada:

10
q w e r t y u i o p
9
m n b v c x z q w

Exemplo de Saída:

e r t y u i o p

Exemplo de Entrada:

4
a b c d
4
a b c d

Exemplo de Saída:

Vetores iguais

