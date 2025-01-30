// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia 7 números inteiros e no final mostre o somatório entre eles.
    Dia do programa: 09/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor, cont = 1, soma = 0;

    puts("------------ SOMATÓRIO DE VALORES ------------");

    while (cont <= 7)
    {
        printf("Digite o %dº valor: ", cont);
        scanf("%d", &valor);
        soma += valor;

        cont++;
    }
    printf("A soma dos valores é: %d!\n", soma);

    return 0;
} // end main