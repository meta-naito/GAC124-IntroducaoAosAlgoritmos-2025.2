## Q8:
Durante a gravidez, é inevitável que muitos casais possuem muitas dúvidas e inclusive curiosidades a respeito do bebê. Em uma clínica médica, a pergunta sobre qual a probabilidade do bebê nascer com olhos claros é bastante recorrente, porém nem sempre há alguém disponível no momento para responder. Para ajudar a clínica a esclarecer esta dúvida de maneira mais eficiente para seus clientes, faça um subprograma que calcule a probabilidade do filho nascer com olhos verdes ou azuis, com base somente na cor dos olhos dos pais, desconsiderando os avós.

Para lhe auxiliar, utilize como base a tabela abaixo. Considere como entradas válidas as cores “Marrom”, “Azul” e “Verde” para os pais, mas somente as cores “Azul” e “Verde” para o filho. Caso uma das cores seja inválida, imprima a palavra “ERRO”, tudo em maiúsculo. O subprograma deverá ter como entrada as cores do pai, da mãe e a cor desejada para o filho na mesma linha. Deverá ter como saída uma String, indicando a porcentagem de chances do filho nascer com aquela cor dos olhos.

Pai 	Mãe 	Filho Verde 	Filho Azul
Marrom	Marrom	8.33% 	2.78%
Marrom	Verde	27.78%	5.56%
Marrom	Azul	16.67%	16.67%
Verde	Marrom	27.78%	5.56%
Verde	Verde	88.64%	10.86%
Verde	Azul	66.42%	33.08%
Azul	Marrom	16.67%	16.67%
Azul	Verde	66.42%	33.08%
Azul	Azul	0.50%	99%

Entradas:

    Strings correspondentes às cores dos olhos do pai, da mãe e cor desejada do filho, respectivamente na mesma linha. A entrada de cada String deve possuir inicial maiúscula e o restante minúsculo.

Saída:

    String correspondente a probabilidade do filho nascer com a cor de olhos escolhida.

Exemplo de Entrada:

Marrom Marrom Verde

Exemplo de Saída:

8.33%

## Q13 (incompleto!):
Daniela é enfermeira em um grande hospital, e tem os horários de trabalho muito variáveis. Para piorar, ela tem sono pesado, e uma grande dificuldade para acordar com relógios despertadores. Recentemente ela ganhou de presente um relógio digital, com alarme com vários tons, e tem esperança que isso resolva o seu problema. No entanto, ela anda muito cansada e quer aproveitar cada momento de descanso. Por isso, carrega seu relógio digital despertador para todos os lugares, e sempre que tem um tempo de descanso procura dormir, programando o alarme despertador para a hora em que tem que acordar. No entanto, com tanta ansiedade para dormir, acaba tendo dificuldades para adormecer e aproveitar o descanso.

Um problema que a tem atormentado na hora de dormir é saber quantos minutos ela teria de sono se adormecesse imediatamente e acordasse somente quando o despertador tocasse. Mas ela realmente não é muito boa com números, e pediu sua ajuda para escrever uma função que, dada a hora corrente e a hora do alarme, determine o número de minutos que ela poderia dormir.

Entrada:

    A entrada contém vários casos de teste. Cada caso de teste é descrito em uma linha, contendo quatro números inteiros H1, M1, H2 e M2, com H1:M1 representando a hora e minuto atuais, e H2:M2 representando a hora e minuto para os quais o alarme despertador foi programado (0 ≤ H1 ≤ 23, 0 ≤ M1 ≤ 59, 0 ≤ H2 ≤ 23, 0 ≤ M2 ≤ 59). O final da entrada é indicado por uma linha que contém apenas quatro zeros, separados por espaços em branco.

Saídas:

    Para cada caso de teste da entrada seu programa deve imprimir uma linha no bloco principal, cada uma contendo um número inteiro, indicando o número de minutos que Daniela tem para dormir.

Exemplo de Entrada:

1 5 3 5
23 59 0 34
21 33 21 10
0 0 0 0

Exemplo de Saída:

120
35
1417

## Q15:
Faça um programa que leia uma fração, simplifique a fração usando um subprograma específico para isto e escreva a fração simplificada. O planejamento a respeito da passagem de parâmetros é parte importante da avaliação.

Considere que não existirão denominadores com o valor 0. Leitura e escrita deverão ser feitas na função principal.

Entradas (cada uma na sua própria linha):

    O numerador (número inteiro);
    o denominador (número inteiro diferente de zero).

Saídas:

    O numerador da fração simplificada;
    o denominador da fração simplificada.

Exemplo de Entrada:

9
15

Exemplo de Saída:

3
5

## Q16:
A proporção áurea, número de ouro, número áureo ou proporção de ouro é uma constante real algébrica irracional denotada pela letra grega phi (Φ), em homenagem ao escultor Phideas (Fídias), que a teria utilizado para conceber o Parthenon, e com o valor arredondado a três casas decimais de 1,618. Também é chamada de seção áurea , razão áurea, razão de ouro, média e extrema razão, divina proporção, divina seção, proporção em extrema razão, divisão de extrema razão ou áurea excelência. O número de ouro é ainda frequentemente chamado razão de Phidias [Wikipédia].

Faça um procedimento que calcula o valor aproximado de phi usando a série de raízes abaixo:
(raiz de um + raiz de um + raiz de um...)

A quantidade de termos deverá ser passada como parâmetro para o procedimento e o resultado retornado por referência para o programa principal. O resultado deverá ser impresso no programa principal. Quanto mais termos usados, mais preciso será o resultado. A quantidade de termos da fórmula é a quantidade de raízes, incluindo a última que é a raiz de 1. Use uma variável do tipo ponto flutuante de precisão dupla (double) para conseguir cálculos mais precisos.

Entradas:

    A quantidade de termos (raízes) utilizados no cálculo.

Saídas:

    O resultado da série de raízes (valor aproximado de phi).

Exemplo de entrada:

11

Exemplo de saída:

1.61803
