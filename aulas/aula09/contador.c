// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 9: ESTRUTURAS DE REPETIÇÃO (1) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a contagem de 0 até o npumero desejado pelo usuário
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short cont = 0, num, salto;
    
    puts("------------------- CONTAGEM DE NÚMEROS ------------------- ");

    printf("Quer contar até quanto? ");
    scanf("%hu", &num);

    printf("Qual será o valor do salto? ");
    scanf("%hu", &salto);

    while (cont <= num)
    {
        if (cont == num)
            printf("%hu ", cont);
        else
            printf("%hu..", cont);
        cont += salto;
    }
    puts("Acabou a contagem!");

    return 0;
} // end main