// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre uma sala de cinema e realizar a reservar de uma cadeira
    Dia do programa: 23/01/2025
*/
#define TAM 10
char cadeiras[TAM];
// --- Protótipo das Funções ---
void mostrarFileirasCinema();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short escolhaCadeira;

    do
    {
        mostrarFileirasCinema();

        printf("Reservar a cadeira: B");
        scanf("%hu", &escolhaCadeira);

        printf("Quer reservar outra? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");
    } while (res != 'n');


    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void mostrarFileirasCinema()
{
    for (int i = 0; i < TAM; i++)
    {
       if (cadeiras[i] == 0)
            printf("[B %d]", i + 1);

    }
    puts("\n-------------------------------------------------------------");
} // end mostrarFileirasCinema
