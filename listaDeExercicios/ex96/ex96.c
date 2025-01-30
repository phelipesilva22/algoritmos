// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que tenha uma função Media(), que vai receber as 2 notas de
    um aluno e retornar a sua média para o programa principal.
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
float media(float n1, float n2);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2;

    puts("------------------- MÉDIA FINAL -------------------");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("A média de %.1f e %.1f é %.1f!\n", nota1, nota2, media(nota1, nota2));

    return 0;
} // end main

// --- Desenvolvimento da Função ---
float media(float n1, float n2)
{
    return (n1 + n2) / 2;
} // end media
