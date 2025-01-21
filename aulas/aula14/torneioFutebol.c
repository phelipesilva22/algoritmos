// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que leia 3 times e mostre o enfrentamento desses times
    Dia do programa: 21/01/2025
*/
#define TAM 3
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nomeTime[TAM][50];

    for (int i = 0; i < TAM; i++)
    {
        puts("------------------");
        puts("CAMPEONATO FUTEBOL");
        puts("------------------");

        printf("Nome do %dº time: ", i + 1);
        fgets(nomeTime[i], sizeof(nomeTime), stdin);
        nomeTime[i][strcspn(nomeTime[i], "\n")] = '\0';
        system("clear");
    }

    puts("--------------------");
    puts(" TABELA DE PARTIDAS ");
    puts("--------------------");

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (nomeTime[i] != nomeTime[j])
                printf("%-10s [] X [] %10s\n", nomeTime[i], nomeTime[j]);
        }
    }

    return 0;
} // end main