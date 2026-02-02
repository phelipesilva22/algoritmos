// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Juliane Joada só come duas frutas: uva e abacaxi. De forma alguma ela
    come outra fruta. Crie um programa que vai analisar se ela vai comer ou
    não uma fruta, da seguinte forma:
    a) Pergunte o nome da fruta que chegou na mesa (considere que o usuário
    só vai digitar o nome de uma fruta)
    b) Ao clicar em "Vai comer?", exiba um alert com "Sim, vai comer X" (onde X
    é a fruta informada), caso a fruta seja uma das que ela come
    c) Caso contrário, exiba um alert com "A fruta X ela não come" (onde X é a
    fruta informada)
    Dia do programa: 01/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lFruta[50];
    
    puts("------------------- FRUTAS SAUDAVÉIS -------------------");

    printf("Qual é o nome da fruta? ");
    fgets(lFruta, sizeof(lFruta), stdin);
    lFruta[strcspn(lFruta, "\n")] = '\0';

    if (strcmp(lFruta, "Uva") == 0 || strcmp(lFruta, "Abacaxi") == 0)
        printf("Sim, vai comer %s!\n", lFruta);
    else
        printf("A fruta %s ela não come!\n", lFruta);

    return 0;
} // end main