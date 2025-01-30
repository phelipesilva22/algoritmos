// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que preencha automaticamente (usando lógica, não apenas
    atribuindo diretamente) um vetor numérico com 15 posições com os primeiros
    elementos da sequência de Fibonacci:
    1  1  2  3  5  8  13  21  34  55  89  144  233  377  610  987
    0  1  2  3  4  5  6   7   8   9   10  11   12   13   14   15
    Dia do programa: 14/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int fibonacci[15];

    puts("----------------- SEQUÊNCIA DE FIBONACCI -----------------");

    fibonacci[0] = 1;
    fibonacci[1] = 1;
    printf("0%d 0%d ", fibonacci[0], fibonacci[1]);
    for (int i = 2; i < 16; i++)
    {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
        if (fibonacci[i] <= 8)
            printf("0%d ", fibonacci[i]);
        else    
            printf("%d ", fibonacci[i]);
        fibonacci[i - 2] = fibonacci[i - 1];
        fibonacci[i - 2] = fibonacci[i];
    }

    putchar('\n');
    for (int i = 0; i < 16; i++)
    {
        printf(" %hu ", i);
    }
    putchar('\n');

    return 0;
} // end main