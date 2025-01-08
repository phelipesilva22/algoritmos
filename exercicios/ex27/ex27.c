// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia duas notas de um aluno e calcule a sua média,
    mostrando uma mensagem no final, de acordo com a média atingida:
    - Média até 4.9: REPROVADO
    - Média entre 5.0 e 6.9: RECUPERAÇÃO
    - Média 7.0 ou superior: APROVADO
    Dia do programa: 07/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2, media;

    puts("--------------- RESULTADO DO ANO LETIVO ---------------");

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("MÉDIA FINAL: %.2f!\n", media);

    if (media < 5)
        puts("REPROVADO!");
    else if (media < 7)
        puts("RECUPERAÇÃO!");
    else 
        puts("APROVADO!");

    return 0;
} // end main