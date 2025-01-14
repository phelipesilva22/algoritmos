// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Desenvolva um programa que leia o primeiro termo e a razão de uma
    PA (Progressão Aritmética), mostrando na tela os 10 primeiros elementos da PA e
    a soma entre todos os valores da sequência.
    Dia do programa: 14/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    short primeiroTermo, razao, an, soma = 0;
    
    puts("------------------ PROGRESSÃO ARITMÉTICA ------------------");
    
    printf("Informe o primeiro termo: ");
    scanf("%hd", &primeiroTermo);

    printf("Informe a razão da PA: ");
    scanf("%hd", &razao);

    // Formúla de PA: an: a1 + (n - 1) . r

    for (int i = 1; i <= 10; i++)
    {
        an = primeiroTermo + (i - 1) * razao;
        printf("%hdº elemento do PA: %hd\n", i, an);
        soma += an;
    }
    printf("A soma dos valores é: %hd!\n", soma);

    return 0;
} // end main