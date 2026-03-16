// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte ao usuário um número;
    b) Pergunte ao usuário uma frase.
    c) Ao clicar num botão "Papagaio", a frase é exibida N vezes em N alerts,
    onde N é o número informado em a)
    Dia do programa: 16/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lNumero;
    char lFrase[50];

    puts("--------------- FRASE PAPAGAIO ---------------");

    printf("Digite um número: ");
    scanf("%d", &lNumero);
    getchar();

    printf("Digite uma frase: ");
    fgets(lFrase, sizeof(lFrase), stdin);
    lFrase[strcspn(lFrase, "\n")] = '\0';

    for (int i = 0; i < lNumero; i++)
        printf("%d - %s\n", i + 1, lFrase);

    return 0;
} // end main