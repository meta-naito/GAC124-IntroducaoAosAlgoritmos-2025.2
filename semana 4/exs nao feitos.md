## Q15:
Pedro Álvares Cabral precisa organizar as caravelas para carregarem os cavalos, as vacas e as galinhas necessárias para a viagem para as Índias.

A caravela possui um limite de carga e você deverá calcular a quantidade máxima de cada tipo de animal que a caravela poderá carregar. Lembre-se que Cabral possui uma quantidade limitada de cada tipo de animal, além disso, ele também informou qual o tipo de animal que é prioritário e que tipo de informação ele precisa para poder finalizar sua tarefa.

A tabela abaixo apresenta o peso de cada tipo de animal:
Tipo 	Peso
Cavalo 	250
Vaca 	150
Galinha 	2

Informações extras:

    O objetivo é colocar o máximo de animais, dessa forma os animais de pequeno porte tem prioridade.
    Ao final do processo é necessário ter como informação a quantidade de cada animal que não pode ser incluído na caravela.

Entradas:

    Limite de Carga (Inteiro).
    Quantidade de cavalos disponíveis (Inteiro).
    Quantidade de vacas disponíveis (Inteiro).
    Quantidade de galinhas disponíveis (Inteiro).

Saída:

    Quantidade de animais que NÃO podem ser incluídos numa caravela na seguinte ordem: Cavalos, Vacas e Galinhas.

Exemplo de entrada:

3000
10
10
10

Exemplo de saída:

5
0
0

## Q20:
Thanos aguarda pacientemente a chegada de seus comparsas, que irá lhe trazer, finalmente, mais jóias do infinito. Como ele está muito ansioso e irritado, implemente um algoritmo para calcular quanto tempo, em minutos, você, fiel escudeiro de Thanos, terá que suportar sua irritação. Para isso, você receberá o horário de saída da nave do comparsa e o horário prevista para chegada, que é informado em dois inteiros representando, respectivamente, horas e minutos. Para o cálculo, você irá levar em consideração que o tempo de viagem é inferior a 24 horas, já que os comparsas seriam destruídos caso demorassem mais que isso.

Entradas:

    Horário de saída da nave (dois inteiros representado horas e minutos)
    Horário previsto para chegada da nave (dois inteiros representado horas e minutos)

Saída:

    Tempo de espera, em minutos

Exemplo de Entrada:

12 59
18 01

Exemplo de Saída:

302

Exemplo de Entrada:

21 13
05 07

Exemplo de Saída:

474