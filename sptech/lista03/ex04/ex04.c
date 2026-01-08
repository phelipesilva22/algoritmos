// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: No desenho animado Dragon Ball, existem personagens de uma raça
    chamada Sayajins. Eles possuem a seguinte característica: Quando estão
    em sua "forma normal", sua força (ou "ki") é normal. Quando estão na forma
    Super Sayajin, sua força (ou "ki") aumenta em 50x. Quando estão na forma
    Super Sayajin 2, sua força (ou "ki") aumenta em 100x. Crie um programa que
    ajude a calcular o "ki" de um guerreiro Sayajin.
    a) Solicite o nome do guerreiro
    b) Solicite o ki normal do guerreiro
    c) Ao clicar num botão "Ver ki em cada forma", exiba um alerta para a forma
    Super Sayajin e outro para Super Sayajin 2, exibindo seus respectivos "ki".
    Em ambas exiba o nome do guerreiro também
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lNomeGuerreiro[50];
    int lQtdKi;

    puts("---------------- DRAGON BALL ----------------");

    printf("Digite o nome do guerreiro: ");
    fgets(lNomeGuerreiro, sizeof(lNomeGuerreiro), stdin);
    lNomeGuerreiro[strcspn(lNomeGuerreiro, "\n")] = '\0';

    printf("Qual é a força do ki? ");
    scanf("%d", &lQtdKi);
    printf("O Guerreiro Sayajin %s tem a força %d quando está como Super Sayajin!\nO Guerreiro Sayajin %s tem a força %d quando está como Super Sayajin 2!\n", 
        lNomeGuerreiro, lQtdKi * 50, lNomeGuerreiro, lQtdKi * 100);

    return 0;
} // end main