// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que leia uma matriz 4x4 e mostre
    - [1] Mostrar a matriz
    - [2] Diagonal Principal
    - [3] Triangulo Superior
    - [4] Triângulo Inferior
    Dia do programa: 25/01/2025
*/
#define TAM 4
// --- Protótipo da Funções ---
void menu();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int matriz[TAM][TAM], op;

    do
    {
        menu();
        scanf("%d", &op);
        system("clear");
    } while (op != 5);
    
    
    return 0;
} // end main

// --- Desenvolvimento da Funções ---
void menu()
{
    puts("=====================");
    puts("    MENU DE OPÇÕES   ");
    puts("=====================");
    puts("[1] Mostrar a Matriz");
    puts("[2] Diagonal Principal");
    puts("[3] Triângulo Superior");
    puts("[4] Triângulo Inferior");
    puts("[5] Sair");
    printf("==== OPÇÃO: ");
} // end menu