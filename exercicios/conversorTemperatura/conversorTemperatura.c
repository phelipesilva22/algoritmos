// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a conversão de temperatura:
    [1] - CELSIUS
    [2] - FAHRENHEIT
    [3] - KELVIN 
    Dia do programa: 26/02/2025
*/
// --- Prótotipo das Funções ---
void menuConversor();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short op;

    do
    {
        system("clear");
        menuConversor();
        scanf("%hu", &op);


        switch (op)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }


        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
    } while (res != 'n');
    

    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void menuConversor()
{
    puts("-------------------- CONVERSOR DE TEMPERATURA --------------------");
    puts("[1] - CELSIUS");
    puts("[2] - FAHRENHEIT");
    puts("[3] - KELVIN");
    printf("Qual temperatura você quer converter? ");
}