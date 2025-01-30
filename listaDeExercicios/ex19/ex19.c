// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua
    média e mostre na tela. No final, analise a média e mostre se o aluno teve ou
    não um bom aproveitamento (se ficou acima da média 7.0).
    Dia do programa: 06/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50];    
    float nota1, nota2, media;

    puts("------------- SPTECH SCHOOL -------------");

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Quanto o %s tirou na 1ª prova? ", nome);
    scanf("%f", &nota1);

    printf("Quanto o %s tirou na 2ª prova? ", nome);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("MÉDIA DE %s: %.2f!\n", nome, media);

    if (media > 7)
        printf("ALUNO %s APROVADO!\n", nome);
    else
        printf("ALUNO %s APROVADO!\n", nome);

    return 0;
} // end main