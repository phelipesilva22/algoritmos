// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e
    guarde esses dados em três vetores. No final, mostre uma listagem contendo
    apenas os dados das funcionárias mulheres que ganham mais de R$5 mil.
    Dia do programa: 17/01/2025
*/
#define TAM 5
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[TAM][50], sexo[TAM], colaboradoras[50];
    float salario[TAM], salarioColaboradoras;

    puts("------------------ EMPRESA SINQIA DOWN ------------------");

    for (int i = 0; i < TAM; i++)
    {
        printf("Colaborador %d\n", i + 1);
        printf("Nome do colaborador: ");
        fgets(nome[i], sizeof(nome), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';

        do
        {
            printf("Sexo de %s: [M/F] ", nome[i]);
            scanf(" %c", &sexo[i]);

            if (sexo[i] != 'm' && sexo[i] != 'f')
                puts("SEXO INVÁLIDO! TENTE NOVAMENTE!!\n");

        } while (sexo[i] != 'm' && sexo[i] != 'f');

        printf("Salário de %s: R$", nome[i]);
        scanf("%f", &salario[i]);
        puts("--------------------------------------------");
        getchar();
    }

    puts(" COLABORADORAS COM MAIS DE 5 MIL ");
    for (int i = 0; i < TAM; i++)
    {
        if (sexo[i] == 'f' && salario[i] > 5000)
        {
            strcpy(colaboradoras, nome[i]);
            salarioColaboradoras = salario[i];
            printf(" Colaboradora %s com o salário de R$%.2f!\n", colaboradoras, salarioColaboradoras);
        }
    }
    puts("--------------------------------------------");

    return 0;
} // end main