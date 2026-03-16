// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Refaça o programa anterior de tal forma que, antes de cada frase
    apareça um contador. Ex: Se a frase digitada foi “Boa Tarde” a página
    ficará assim:
    1. Boa tarde
    2. Boa tarde
    ...
    7. Boa tarde
    Dia do programa: 09/03/2026
*/
#define QTD_TENTATIVAS 7
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lFrase[50];

    puts("------------------- MATÉRIA ALGORITMOS -------------------");

    printf("Diga algo sobre a matéria de algoritmos: ");
    fgets(lFrase, sizeof(lFrase), stdin);
    lFrase[strcspn(lFrase, "\n")] = '\0';

    for (int i = 0; i < QTD_TENTATIVAS; i++)
        printf("%d. %s\n", i + 1, lFrase);
    
    return 0;
} // end main