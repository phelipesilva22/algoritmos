// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 8: ESTRUTURAS CONDICIONAIS (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que simule um atendimento do criança esperança
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short op, valorDoado;

    puts("--------------------------");
    puts("     CRIANÇA ESPERANÇA    ");
    puts("-------------------------");
    puts(" Muito obrigado por ajudar");
    puts(" [1] para doar R$10");
    puts(" [2] para doar R$25");
    puts(" [3] para doar R$50");
    puts(" [4] para doar outros valores");
    puts(" [5] para cancelar");
    printf("Escolha sua opção de doação: ");
    scanf("%hu", &op);

    switch (op)
    {
    case 1:
        valorDoado = 10;
        break;
    case 2:
        valorDoado = 25;
        break;
    case 3:
        valorDoado = 50;
        break;
    case 4:
        printf("Qual o valor da doação? R$");
        scanf("%hu", &valorDoado); 
        break;
    case 5:
        valorDoado = 0;
        break;
    }
    puts("-------------------------");
    printf(" SUA DOAÇÃO FOI DE: R$%hu.00!\n", valorDoado);
    puts(" MUITO OBRIGADO!");
    puts("-------------------------");

    return 0;
} // end main