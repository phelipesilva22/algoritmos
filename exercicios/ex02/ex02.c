// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas- vindas para ela:
    Ex:
    Qual é o seu nome? João da Silva
    Olá João da Silva, é um prazer te conhecer!
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50];

    puts("---------- BEM VINDO AO CLUBE ----------");
    printf("Qual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Olá %s, é um prazer te conhecer!\n", nome);

    return 0;
} // end main