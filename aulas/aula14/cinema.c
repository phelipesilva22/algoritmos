// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre uma sala de cinema e realizar a reservar de uma cadeira
    Dia do programa: 23/01/2025
*/
#define TAM 10
char *cadeiras[TAM];
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
        do
        {
            printf("Reservar a cadeira: B");
            scanf("%hu", &escolhaCadeira);
            if (escolhaCadeira > 10)
            {
                puts("LUGAR NÃO EXISTE\n");
                sleep(500);
            }
        } while (escolhaCadeira > 10);
        
        if (cadeiras[escolhaCadeira - 1] == 0)
        {
            cadeiras[escolhaCadeira - 1] = "X";
            printf("Cadeira B%hu RESERVADA!\n", escolhaCadeira);
        } else
        {
            puts("ERRO! Lugar Ocupado!");
        }
            
        printf("Quer reservar outra? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");
    } while (res != 'n');
    puts("FIM DAS RESERVAS!");


    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void mostrarFileirasCinema()
{
    for (int i = 0; i < TAM; i++)
    {
       if (cadeiras[i] == 0)
            printf("[B%d]", i + 1);
        else
            printf("[---]");
    }
    puts("\n-------------------------------------------------------------");
} // end mostrarFileirasCinema
