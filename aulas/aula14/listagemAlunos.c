// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a listagem de uma turma utilizando vetores
    Dia do programa: 20/01/2025
*/
#define TAM 4
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[TAM][50];
    float nota1[TAM], nota2[TAM], media[TAM], somaMedia, mediaTurma;
    unsigned short totAcimaMediaTurma = 0;

    for (int i = 0; i < TAM; i++)
    {
        puts("-------------------- LISTAGEM DE ALUNOS --------------------");
        printf("ALUNO %d\n", i + 1);
        printf("Nome: ");
        fgets(nome[i], sizeof(nome), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';

        printf("Primeira Nota de %s: ", nome[i]);
        scanf("%f", &nota1[i]);

        printf("Segunda Nota de %s: ", nome[i]);
        scanf("%f", &nota2[i]);
        getchar();

        media[i] = (nota1[i] + nota2[i]) / 2;
        somaMedia += media[i];
        system("clear");
    }

    mediaTurma = somaMedia / TAM;
    puts("-------------------- LISTAGEM DE ALUNOS --------------------");
    for (int i = 0; i < TAM; i++)
    {
        printf("%-20s %10.2f\n", nome[i], media[i]);
        if (media[i] > mediaTurma)
            totAcimaMediaTurma++;
    }
    printf("Média da turma: %.2f!\n", mediaTurma);
    printf("Total de alunos acima da média da turma: %hu!\n", totAcimaMediaTurma);

    return 0;
} // end main