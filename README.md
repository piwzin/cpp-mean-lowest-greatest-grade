# cpp-mean-lowest-greatest-grade
Considere que um aluno de uma disciplina da Unifei tem 5 notas de atividades avaliativas entregues. A política do professor da disciplina é descartar a menor e a maior nota antes de calcular a média com as notas restantes. Conhecendo isso, escreva um programa em linguagem C/C++ que leia as 5 notas de atividades, armazenando-as em um vetor para uma verificação posterior de acordo com a política do professor. Após o descarte da menor e a maior nota, calcule a média das notas restantes. O código da main.cpp já apresenta uma versão inicial do programa, juntamente com alguns comentários nas funções.

Uma nota **menor que zero** OU **maior que dez** deve ser descartada e não pode ser armazenada no vetor.


## Exemplos de entrada de dados e a saída esperada

- ENTRADA: 2 5 6 7 8

        Media = 6

- ENTRADA: 2 8 10 7 6

        Media = 7

- ENTRADA: 1 1 10 10 9

        Media = 6.66667

- ENTRADA: -1 2 10 7 6 8 

        Media = 7

- ENTRADA: 10 10 -1 1 1 9

        Media = 6.66667
