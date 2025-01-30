// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Escreva um programa que leia um número qualquer e mostre a tabuada desse
    número, usando a estrutura “para”.
    Ex: Digite um valor: 5
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15 ...
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    int valor;

    puts("-------------------- TABUADA --------------------");

    do
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        for (int i = 1; i <= 10; i++)
            printf("%d X %d = %d\n", valor, i, valor * i);

        puts("Deseja continuar? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &res);
        res = tolower(res);
        puts("------------------------------------------");
    } while (res != 'n');
    

    return 0;
} // end main