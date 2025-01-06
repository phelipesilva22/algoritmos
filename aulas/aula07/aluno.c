// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 7: ESTRUTURAS CONDICIONAIS ---
    Professor: Gustavo Guanabara
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer o programa que mostre se o aluno está aprovado ou reprovado
    Dia do programa: 05/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2, media;

    puts("-----------------------");
    puts(" ESCOLA JAVALI CANSADO ");
    puts("-----------------------");

    printf("Primeira Nota: ");
    scanf("%f", &nota1);

    printf("Segunda Nota: ");
    scanf("%f", &nota2); 

    media = (nota1 + nota2) / 2;
    puts("-----------------------");
    printf(" MÉDIA: %.1f!\n", media);

    if (media >= 7)
        puts(" ALUNO APROVADO!");
    else
        puts(" ALUNO REPROVADO!");

    puts("-----------------------");

    return 0;
} // end main