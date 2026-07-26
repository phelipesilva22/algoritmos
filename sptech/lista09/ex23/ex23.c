// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite um número, que deve estar entre 10 e 500, exibindo alerta de
    erro caso não atenda os critérios;
    b) Ao clicar no botão "Somar Pares", deve exibir todos os números pares
    entre 0 e o número inserido pelo usuário;
    c) Ao final da listagem, deve exibir a frase "Soma dos pares: X", sendo X a
    soma de todos os números exibidos;
    Dia do programa: 21/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lNumero, lSomaPares = 0;

    puts("------------------ SOMAR PARES ------------------");

    printf("Digite um número entre 10 e 500: ");
    scanf("%d", &lNumero);

    if (lNumero > 10 && lNumero <= 500)
    {
        for (int i = 0; i <= lNumero; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
                lSomaPares += i;
            }
        }

        printf("Soma dos pares: %d!\n", lSomaPares);
    } else 
        puts("NÚMERO INVÁLIDO! TENTE NOVAMENTE!");

    return 0;
} // end main