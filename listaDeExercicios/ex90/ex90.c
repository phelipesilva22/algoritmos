// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
    valores para um procedimento Somador() que vai calcular e mostrar a soma entre
    eles.
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
void Somador(int n1, int n2);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor1, valor2;

    puts("------------------ SOMA DE VALORES ------------------");

    printf("Digite um valor: ");
    scanf("%d", &valor1);

    printf("Digite um valor: ");
    scanf("%d", &valor2);

    Somador(valor1, valor2);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Somador(int n1, int n2)
{
    printf("A soma de %d + %d = %d!\n", n1, n2, n1 + n2);
} // end Somador