// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses
    valores em dois vetores, em posições relacionadas. No final, mostre uma listagem
    contendo apenas os dados das pessoas menores de idade.
    Dia do programa: 17/01/2025
*/
#define TAM 4
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50];
    unsigned short idade[TAM];

    puts("------------------- MENORES DE IDADE -------------------");

    for (int i = 0; i < TAM; i++)
    {
        printf("PESSOA %d\n", i + 1);
        printf("Digite o nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Idade de %s: ", nome);
        scanf("%hu", &idade);
        puts("--------------------------------------------");
        getchar();
    }

    return 0;
} // end main