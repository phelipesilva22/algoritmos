// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Tenha um botão "Diga algo sobre a matéria de Algoritmos";
    b) Ao clicar nele, mostre na própria página 7 vezes uma frase a sua escolha,
    uma abaixo da outra.
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
        printf("%s\n", lFrase);

    return 0;
} // end main