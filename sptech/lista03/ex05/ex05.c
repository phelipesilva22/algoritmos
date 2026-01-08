// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Na faculdade SPTech o aluno tem 2 notas: A da "avaliação continuada" e
    a da "avaliação semestral". A média final é a soma simples entre 40% da
    "continuada" e 60% da "semestral". Assim, para ajudar um aluno para saber
    o quanto precisa para passar e estagiar em empresas como Easynvest,
    C6Bank, Tivit, Banco Safra, Deloitte, HP etc, crie um programa que:
    a) Solicite a nota que ele tirou na "continuada" e na "semestral"
    b) Solicite o nome do aluno
    c) Calcule sua média
    d) Exiba uma frase como esta "A média de NOME será de MEDIA". Onde
    NOME é o valor informado em b) e MEDIA, o valor calculado em c)
    Dia do programa: 07/01/2025
*/

//´--- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lNomeAluno[50];
    float lNotaContinuada, lNotaSemestral;

    puts("----------------- SUPER ESTAGIÁRIOS - SPTECH -----------------");

    printf("Digite a nota continuada: ");
    scanf("%f", &lNotaContinuada);

    printf("Digite a nota semestral: ");
    scanf("%f", &lNotaSemestral);
    getchar();

    printf("Digite o nome do aluno: ");
    fgets(lNomeAluno, sizeof(lNomeAluno), stdin);
    lNomeAluno[strcspn(lNomeAluno, "\n")] = '\0';

    printf("A média de %s será de %.2f!\n", lNomeAluno, (lNotaContinuada + lNotaSemestral) / 2);

    return 0;
} // end main