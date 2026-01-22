// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte ao usuário qual sua meta de economia
    b) Pergunte ao usuário quanto tem guardado
    c) Ao clicar em "Analisar economia"...
    d) Caso a meta tenha sido alcançada ou ultrapassada, exibir, abaixo do
    botão, a frase Parabéns, meta alcançada!. Caso a meta tenha sido
    ultrapassada, exibir também a frase Meta ultrapassada em X (onde X é a
    diferença entre a economia e a meta)
    e) Caso a meta ainda não tenha sido alcançada, exibir, abaixo do botão, a
    frase Força! Ainda em busca da meta! Falta X (onde X é a diferença entre a
    meta e a economia)
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lMeta, lEconomia;

    puts("-------------------- ECONOMIA PESSOAL --------------------");

    printf("Qual é a sua meta de economia? R$");
    scanf("%f", &lMeta);

    printf("Quanto você tem guardado? R$");
    scanf("%f", &lEconomia);

    if (lEconomia >= lMeta)
    {
        puts("Parabéns, meta alcançada!");
        if (lEconomia > lMeta)
            printf("Meta ultrapassada em R$%.2f!\n", lEconomia - lMeta);
    } else
    {
        printf("Força! Ainda em busca da meta! Falta R$%.2f!\n", lMeta - lEconomia);
    }

    return 0;
} // end main