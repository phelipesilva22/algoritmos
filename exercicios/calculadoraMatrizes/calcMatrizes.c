// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que gere o tamanho de duas matrizes, preenchendo elas com números aleatórios. Após isso, será realizada as 4 operações aritméticas básicas, resultando em uma nova matriz com os valores calculados das duas matrizes anteriores de acordo com a operação aritmética escolhida.
    Dia do programa: 31/01/2025
*/
// --- Variáveis Globais --- 
unsigned short tamMatriz;
// --- Protótipo das Funções ---
void menuOperacoesAritmeticas();
void leituraMatrizes(unsigned short t, unsigned short c);
void somaMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short t1);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short op;

    do
    {
    
        menuOperacoesAritmeticas();
        scanf("%hu", &op);

        printf("Digite o tamanho da matriz: ");
        scanf("%hu", &tamMatriz);

        switch (op)
        {
        case 1:
            leituraMatrizes(tamMatriz, op);
            break;
        
        default:
            puts("OPÇÃO INVÁLIDA!!");
            break;
        }
 
        printf("Deseja continuaxr? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");
    } while (res != 'n');

    puts("FINALIZANDO O PROGRAMA!");
    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void menuOperacoesAritmeticas()
{
    puts("--------------------- CALCULADORA DE MATRIZES ---------------------");
    puts("[1] - ADIÇÃO");
    puts("[2] - SUBTRAÇÃO");
    puts("[3] - MULTIPLICAÇÃO");
    puts("[4] - DIVISÃO");
    printf("Selecione a operação aritmética desejada: ");
} // end menuOperacoesAritmeticas

void leituraMatrizes(unsigned short t, unsigned short c)
{
    int mat1[t][t], mat2[t][t];

    srand(time(NULL));
    puts("------- Mat1 -------");
    for (int l = 0; l < t; l++)
    {
        for (int c = 0; c < t; c++)
        {   
            mat1[l][c] = rand() % 20 + 1;
            mat2[l][c] = rand() % 20 + 1;
            printf(" %3d ", mat1[l][c]);
        }
        putchar('\n');
    }

    puts("------- Mat2 -------");
    for (int l = 0; l < t; l++)
    {
        for (int c = 0; c < t; c++)
        {   
            printf(" %3d ", mat2[l][c]);
        }
        putchar('\n');
    }

    if (c == 1)
        somaMatrizes(mat1, mat2, t);

} // end leituraMatrizes

void somaMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short t1)
{
    int somaMatrizes[t1][t1];

    puts("--- Soma de matrizes ---");
    for (int l = 0; l < t1; l++)
    {
        for (int c = 0; c < t1; c++)
        {   
            somaMatrizes[l][c] = m1[l][c] + m2[l][c];
            printf(" %3d ", somaMatrizes[l][c]);
        }
        putchar('\n');
    }
} // end somaMatrizes