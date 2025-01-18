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
#define TAM 9
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[TAM][50], menor[50];
    unsigned short idade[TAM], idadeMenor = 0;

    puts("------------------- MENORES DE IDADE -------------------");

    for (int i = 0; i < TAM; i++)
    {
        printf("PESSOA %d\n", i + 1);
        printf("Digite o nome: ");
        fgets(nome[i], sizeof(nome), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';

        printf("Idade de %s: ", nome[i]);
        scanf("%hu", &idade[i]);
        puts("--------------------------------------------");
        getchar();

    }
        
    puts("LISTAGEM DOS MENORES");
    for (int i = 0; i < TAM; i++)
    {
        if (idade[i] < 18)
        {
            strcpy(menor, nome[i]);
            idadeMenor = idade[i];
            printf("%s com %hu anos!\n", menor, idadeMenor);    
        }
    }
    puts("--------------------------------------------");
    
    return 0;
} // end main