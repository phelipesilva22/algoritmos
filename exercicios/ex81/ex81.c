// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No final, mostre:
    a) Qual é a média de idade das pessoas cadastradas
    b) Em quais posições temos pessoas com mais de 25 anos
    c) Qual foi a maior idade digitada (podem haver repetições)
    d) Em que posições digitamos a maior idade
    Dia do programa: 16/01/2025

*/
#define TAM 8
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short idade[TAM], somaIdade = 0, posMaior25 = 0, posMaiorIdade = 0, maiorIdade = 0;
    float mediaIdade;
    
    puts("-------------------- VETOR IDADES --------------------");

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        idade[i] = rand() % 100 + 1;
        printf("%dº idade = %hu anos!\n", i + 1, idade[i]);
        somaIdade += idade[i];
    }
    mediaIdade = (float) somaIdade / TAM;
    puts("-----------------------------------------------");
    printf("Média da idades informadas é: %.1f!\n", mediaIdade);

    for (int i = 0; i < TAM; i++)
    {
        if (idade[i] > 25)
        {
            posMaior25 = i;
            printf("Temos pessoas com mais de 25 anos na posição: [%hu]\n", posMaior25 + 1);
        }

        if (idade[i] > maiorIdade)
        {
            maiorIdade = idade[i];
            posMaiorIdade = i;
        }
    }
    printf("A maior idade foi: %hu!\n", maiorIdade);
    printf("A posição da maior idade: %hu!\n", posMaiorIdade + 1);

    return 0;
} // end main