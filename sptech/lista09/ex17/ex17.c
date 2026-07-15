// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Incremente a questão anterior de tal forma que:
    a) Também tenha um campo no qual o usuário indique a capacidade de
    passageiros que o veículo suporta
    b) Ao clicar no botão, as frases só começam a mostrar que o passageiro
    terá que esperar quando a capacidade indicada em a) for excedida.
    Dia do programa: 14/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdPessoas, lQtdPassageiros;

    puts("-------------------- SIMULAÇÃO DE CARONA --------------------");

    printf("Quantas pessoas vão entrar no carro? ");
    scanf("%hd", &lQtdPessoas);

    printf("Quantas passageiros terão no carro? ");
    scanf("%hd", &lQtdPassageiros);

    printf("Entrou o 1º passageiro (motorista)\n");
    for (int i = 2; i <= lQtdPessoas; i++)
    {
        if (i <= lQtdPassageiros    )
            printf("Entrou o %dº passageiro\n", i);
        else
            printf("O %dº passageiro terá que esperar!\n", i);
    }

    return 0;
} // end main