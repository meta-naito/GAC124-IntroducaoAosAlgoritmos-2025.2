## Questão 1: Ordenação - Insertion Sort Passo a Passo (menores no fim - impressao de passo)

Implemente o algoritmo de ordenação insertion sort de tal forma que os elementos são inseridos do lado direito do vetor, em ordem decrescente, conforme algoritmo abaixo:

1. Para cada índice i do vetor, variando do penúltimo até o primeiro:
   1.1. Atribuir ao valor auxiliar, o item da posição i.
   1.2. Atribuir ao índice j, o sucessor do índice i.
   1.3. Enquanto j for um índice válido e o item na posição j for
        maior que o valor auxiliar:
      1.3.1. Atribuir ao item da posição que antecede j, o item da posição j.
      1.3.2. Incrementar j.
   1.4. Atribuir ao item da posição que antecede j, o valor auxiliar.

A cada inserção realizada, o estado do vetor deverá ser escrito, facilitando assim a análise da execução do algoritmo.

Entradas:

    Tamanho do vetor que será ordenado.
    Os diversos valores para ordenação (números inteiros).

Saídas:

    Cada passo da ordenação. Ou seja, os valores do vetor a cada inserção feita.

Exemplo de entradas:

6
4 7 2 3 5 6

Exemplo de saídas:

4 7 2 3 6 5
4 7 2 6 5 3
4 7 6 5 3 2
4 7 6 5 3 2
7 6 5 4 3 2

## Questão 3: Vetor - Inserção Ordenada

Considere um vetor de V de 20 posições, preenchido até o oitavo índice de forma ordenada crescente, com os seguintes elementos: V[1, 3, 6, 7, 8, 22, 25, 41]. O algoritmo deverá ler números fornecidos pelo usuário de forma que os número sejam inseridos nas posições corretas, ou seja, mantendo a ordem crescente do vetor. O término de leitura dos valores fornecidos ocorrerá quando o usuário digitar -1. Quando o vetor for completamente preenchido, imprimir o conteúdo do vetor e sair do programa.

Entradas:

    Números fornecido pelo usuário (inteiro), terminados com -1

Saídas:

    Vetor ordenado

Exemplo de Entrada:

36 4 23 24 20 5 9 27 50 10 11 2 -1

Exemplo de Saída:

 1 2 3 4 5 6 7 8 9 10 11 20 22 23 24 25 27 36 41 50
