// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
    segundo grau e mostre o valor de Delta.
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float a, b, c, delta;

    puts("-------------- EQUAÇÂO DO 2º GRAU - BHASKARA --------------");

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0)
        puts("NÃO EXISTE DELTA NEGATIVO!");
    else
        printf("O valor de Delta é: %.2f!\n", delta);

    return 0;
} // end main