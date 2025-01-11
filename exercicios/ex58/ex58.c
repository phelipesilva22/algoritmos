// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa
    vai parar quando for digitada a idade 999. No final, mostre quantos alunos existem na turma e qual é a média de idade do grupo.
    Dia do programa: 11/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short idade, somaIdade = 0, cont = 1;
    float mediaIdade;

    puts("--------------------- SOMATÓRIO DE IDADES ---------------------");

    do
    {
        printf("Digite a %huº idade: ", cont);   
        scanf("%hu", &idade);

        somaIdade += idade;
        cont++;
    } while (idade != 999);

    mediaIdade = (float)somaIdade / cont;
    printf("A média das idades digitadas é: %.2f!\n", mediaIdade);

    return 0;
} // end main