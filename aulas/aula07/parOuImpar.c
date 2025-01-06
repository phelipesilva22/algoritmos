// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 7: ESTRUTURAS CONDICIONAIS ---
    Professor: Gustavo Guanabara
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer programa para mostrar se número é PAR ou ÍMPAR utilizando estruturas condicionais
    Dia do programa: 05/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int numero;

    puts("------------- PAR OU ÍMPAR -------------");

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("O número %d é PAR!\n", numero);
    else 
        printf("O número %d é ÍMPAR!\n", numero);

    return 0;
} // end main