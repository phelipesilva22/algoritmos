// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 8: ESTRUTURAS CONDICIONAIS (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a situação de um aluno, mostrando se foi reprovado, em recuperação ou aprovado
    Dia do programa: 09/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2, media;

    puts("------------------ SITUAÇÃO ALUNO ------------------ ");

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("MÉDIA: %.2f!\n", media);

    if (media >= 7)
        puts("ALUNO APROVADO!");
    else if (media >= 5)
        puts("ALUNO EM RECUPERAÇÃO!");
    else 
        puts("ALUNO REPROVADO!");

    return 0;
} // end main