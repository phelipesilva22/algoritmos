// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No final, mostre uma listagem com todos os nomes informados, na ordem inversa daquela em que eles foram informados.
    Dia do programa: 15/01/2025
*/
#define TAM 7
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[TAM][50];

    puts("---------------- ORDEM INVERSA NOMES ----------------");

    for (int i = 0; i < TAM; i++)
    {
        printf("%dº nome: ", i + 1);
        fgets(nome[i], sizeof(nome), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
    }

    puts("--- LISTAGEM DO NOMES ---");
    for (int i = TAM - 1; i >= 0; i--)
        printf("%dº nome digitado: %s\n", i + 1, nome[i]);

    return 0;
} // end main