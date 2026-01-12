// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite ao usuário um número para ver sua "tabuada";
    b) Ao clicar em "Ver Tabuada", aparece na tela algo como isso:
    3 x 1 = 3
    3 x 2 = 6
    3 x 3 = 9
    (e assim por diante... até x 9)
    3 x 9 = 27
    No exemplo, o usuário digitou 3 no item a).
    Dia do programa: 11/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lNumero;

    puts("----------------------- TABUADA -----------------------");

    printf("Digite um número: ");
    scanf("%d", &lNumero);

    for (int i = 1; i <= 10; i++)
        printf("%d X %d = %d\n", lNumero, i, lNumero * i);

    return 0;
} // end main