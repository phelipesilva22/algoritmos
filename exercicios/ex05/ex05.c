// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na tela a sua média na disciplina.
    Ex:
    Nota 1: 4.5
    Nota 2: 8.5
    A média entre 4.5 e 8.5 é igual a 6.5
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2;

    puts("------------ MÉDIA DAS NOTAS ------------");

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("A média entre %.1f e %.1f é igual a %.1f!\n", nota1, nota2, (nota1 + nota2) / 2);

    return 0;
} // end main