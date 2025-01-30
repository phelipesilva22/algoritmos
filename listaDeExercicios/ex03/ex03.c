// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia o nome e o salário de um funcionário, mostrando no
    final uma mensagem.
    Ex:
    Nome do Funcionário: Maria do Carmo
    Salário: 1850,45
    O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
    Dia do programa: 04/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[40];
    float salario;

    puts("------------- DADOS COLABORADOR -------------");

    printf("Nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Salario: R$");
    scanf("%f", &salario);

    printf("O funcionário %s tem um salário de R$%.2f!\n", nome, salario);

    return 0;
} // end main