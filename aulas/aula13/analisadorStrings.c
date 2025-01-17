// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    --- CURSO DE ALGORITMOS - AULA 13: FUNÇÕES ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre um analisador de strings
    - sizeof()
    Dia do programa: 16/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50];

    puts("-------------------- ANALISADOR DE STRINGS --------------------");

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; nome[i] != '\0'; i++)
        nome[i] = toupper(nome[i]);

    printf("Total de letras de %s: %ld!\n", nome, strlen(nome));
    for (int i = 0; nome[i] != '\0'; i++)
        nome[i] = toupper(nome[i]);

    printf("SEU NOME EM LETRAS MAIÚSCULAS: %s!\n", nome);
    
    for (int i = 0; nome[i] != '\0'; i++)
        nome[i] = tolower(nome[i]);
    printf("seu nome em letras minúsculas: %s!\n", nome);
    printf("A primeira letra do seu nome é: %c!\n", nome[0]);
    printf("A última letra do seu nome Pé: %c!\n", nome[strlen(nome) - 1]);
    printf("Seu nome tem a letra A na posição: %ld!\n", strstr(nome, "A") ? strstr(nome, "A") - nome + 1 : -1);


    for (int i = 0; nome[i] != '\0'; i++)
        nome[i] = toupper(nome[i]);

    printf("Seu nome invertido: ");
    for (int i = strlen(nome) - 1; nome[i] >= 0; i--)
        printf("%c", nome[i]); 
    putchar('!');
    putchar('\n');
    

    return 0;
} // end main