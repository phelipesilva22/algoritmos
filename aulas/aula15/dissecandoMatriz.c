// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
// --- Variáveis Globais ---
int matriz[TAM][TAM], flagMatriz = 0;
// --- Protótipo da Funções ---
void menu();
void gerarMatriz();
void mostrarMatriz();
void mostrarDiagonalPrincipal(int mat[TAM][TAM]);
void mostrarTrianguloSuperior(int mat[TAM][TAM]);
void mostrarTrianguloInferior(int mat[TAM][TAM]);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short op;

    do
    {
        menu();
        scanf("%hu", &op);

        system("clear");
        /* srand(time(NULL)); */
        switch (op)
        {
        case 1:
            if (!flagMatriz)
            {
               gerarMatriz();
                flagMatriz = 1;
            }
            mostrarMatriz();
            break;
        case 2: 
            mostrarDiagonalPrincipal(matriz);
            break;
        case 3:
            mostrarTrianguloSuperior(matriz);
            break;
        case 4:
            mostrarTrianguloInferior(matriz);
            break;
        case 5:
            puts("ENCERRANDO...");
            break;
        default:
            puts("OPÇÃO INVÁLIDA!!");
            break;
        }
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
    puts("==== OPÇÃO: ");
} // end menu

void gerarMatriz()
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 20 + 1;
        }
    }
} // end gerarMatriz

void mostrarMatriz()
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf(" %3d ", matriz[i][j]);
        }
        putchar('\n');
    }
} // end gerarMatriz

void mostrarDiagonalPrincipal(int mat[TAM][TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("    ");
        }
        printf("%4d\n", mat[i][i]);
    }
} // end mostrarDiagonalPrincipal