// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    --- CURSO DE ALGORITMOS - AULA 8: ESTRUTURAS CONDICIONAIS (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que simule uma partida de futebol 
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char timeMandante[50], timeVisitante[50];
    unsigned short golsMandante, golsVisitante, diferencaGols;

    puts("------------------------");
    puts("   PARTIDA DE FUTEBOL   ");
    puts("------------------------");

    printf("Nome do time mandante: ");
    fgets(timeMandante, sizeof(timeMandante), stdin);
    timeMandante[strcspn(timeMandante, "\n")] = '\0';

    printf("Nome do time visitante: ");
    fgets(timeVisitante, sizeof(timeVisitante), stdin);
    timeVisitante[strcspn(timeVisitante, "\n")] = '\0';

    printf("Quantos gols o %s fez? ", timeMandante);
    scanf("%hu", &golsMandante);

    printf("Quantos gols o %s fez? ", timeVisitante);
    scanf("%hu", &golsVisitante);

    puts("-----------------------");
    if (golsMandante > golsVisitante)
        diferencaGols = golsMandante - golsVisitante;    
    else
        diferencaGols = golsVisitante - golsMandante;

    printf(" %s %hu X %hu %s!\n", timeMandante, golsMandante, golsVisitante, timeVisitante);                                  

    switch (diferencaGols)
    {
    case 0:
        puts(" STATUS: EMPATE");
        puts("--- DISPUTA DE PENALTIS ---");
        printf("%s: ", timeMandante);
        scanf("%hu", &golsMandante); 

        printf("%s: ", timeVisitante);
        scanf("%hu", &golsVisitante);

        printf("RESULTADO FINAL: %s %hu X %hu %s!\n", timeMandante, golsMandante, golsVisitante, timeVisitante);
        break;
    case 1: case 2: case 3:
        puts(" STATUS: PARTIDA NORMAL");
        break;
    case 4: case 5: case 6: case 7:
        puts(" STATUS: GOLEADA");
        break;
    default:
        puts(" STATUS: ALGO INCOMUM!\nVocê digitou os dados corretos? ");
        break;
    }
    puts("-----------------------");

    return 0;
} // end main