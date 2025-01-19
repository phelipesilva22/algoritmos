// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma
    adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o maior entre eles.
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
int Maior(int n1, int n2, int n3);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor1, valor2, valor3;

    puts("---------------- QUAL É O MAIOR NÚMERO? ----------------");

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    printf("O maior valor é: %d!\n", Maior(valor1, valor2, valor3));

    return 0;
} // end main

// --- Desenvolvimento da Função ---
int Maior(int n1, int n2, int n3)
{
    if (n1 >= n2 && n1 >= n3)
        return n1;
    else if (n2 >= n1 && n2 >= n3)
        return n2;
    return n3;
} // end Maior