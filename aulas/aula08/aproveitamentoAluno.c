// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 8: ESTRUTURAS CONDICIONAIS (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre o aproveitamento de um aluno, com base no verbete da nota escolar do Wikipédia
    Dia do programa: 10/01/2025
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

    if (media >= 9)
        puts(" APROVEITAMENTO: A");
    else if (media >= 8)
        puts(" APROVEITAMENTO: B");
    else if (media >= 7)
        puts(" APROVEITAMENTO: C");
    else if (media >= 6)
        puts(" APROVEITAMENTO: D");
    else if (media >= 5)
        puts(" APROVEITAMENTO: E");
    else 
        puts(" APROVEITAMENTO: F");

    puts("-----------------------");

    return 0;
} // end main