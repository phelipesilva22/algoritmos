// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Refaça o exercício 90, só que agora em forma de função Somador(), que vai
    receber dois parâmetros e vai retornar o resultado da soma entre eles para o
    programa principal.
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
int soma(int n1, int n2);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor1, valor2;

    puts("-------------------- SOMA DOS VALORES --------------------");

    printf("Digite um valor: ");
    scanf("%d", &valor1);

    printf("Digite outro valor: ");
    scanf("%d", &valor2);

    if (valor2 < 0)
        printf("A soma de %d%d = %d!\n", valor1, valor2, soma(valor1, valor2));
    else
        printf("A soma de %d + %d = %d!\n", valor1, valor2, soma(valor1, valor2));
    return 0;
} // end main

// --- Desenvolvimento da Função ---
int soma(int n1, int n2)
{
    return n1 + n2;
} // end soma