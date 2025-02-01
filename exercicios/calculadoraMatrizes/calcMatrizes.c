// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que gere o tamanho de duas matrizes, preenchendo elas com números aleatórios. Após isso, será realizada as 4 operações aritméticas básicas, resultando em uma nova matriz com os valores calculados das duas matrizes anteriores de acordo com a operação aritmética escolhida.
    Dia do programa: 31/01/2025
*/
// --- Variáveis Globais --- 
unsigned short tamMatriz;
// --- Protótipo das Funções ---
void menuOperacoesAritmeticas();
void leituraMatrizes(unsigned short tam, unsigned short opt, int numAle);
void somaMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat);
void subtracaoMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat);
void multiplicacaoMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat);
void divisaoMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short op;
    int numAleatorio;

    do
    {
        do 
        {
            menuOperacoesAritmeticas();
            scanf("%hu", &op);
            if (op > 4)
            {
                puts("OPÇÃO NÃO ENCONTRADA!! TENTE NOVAMENTE!!");
                sleep(1);
                system("clear");
            }
        } while(op > 4);
       
        printf("Digite o tamanho da matriz: ");
        scanf("%hu", &tamMatriz);

        printf("Digite o número aleatório de (limite): ");
        scanf("%d", &numAleatorio);

        leituraMatrizes(tamMatriz, op, numAleatorio);
        
        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");
    } while (res != 'n');

    puts("--- FINALIZANDO O PROGRAMA! ---");
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

void leituraMatrizes(unsigned short tam, unsigned short opt, int numAle)
{
    int mat1[tam][tam], mat2[tam][tam];

    srand(time(NULL));
    puts("------- Mat1 -------");
    for (int l = 0; l < tam; l++)
    {
        for (int c = 0; c < tam; c++)
        {   
            mat1[l][c] = rand() % numAle + 1;
            mat2[l][c] = rand() % numAle + 1;
            printf(" %3d ", mat1[l][c]);
        }
        putchar('\n');
    }

    puts("------- Mat2 -------");
    for (int l = 0; l < tam; l++)
    {
        for (int c = 0; c < tam; c++)
        {   
            printf(" %3d ", mat2[l][c]);
        }
        putchar('\n');
    }

    switch (opt)
    {
    case 1:
        somaMatrizes(mat1, mat2, tam);
        break;
    case 2:
        subtracaoMatrizes(mat1, mat2, tam);
        break;
    case 3:
        multiplicacaoMatrizes(mat1, mat2, tam);
        break;
    case 4:
        divisaoMatrizes(mat1, mat2, tam);
        break;
    default:
        puts("OPÇÃO INVÁLIDA!!");
        break;
    }
} // end leituraMatrizes

void somaMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat)
{
    int somaMatrizes[tamMat][tamMat];

    puts("---- Mat1 + Mat2 ----");
    for (int l = 0; l < tamMat; l++)
    {
        for (int c = 0; c < tamMat; c++)
        {   
            somaMatrizes[l][c] = m1[l][c] + m2[l][c];
            printf(" %5d ", somaMatrizes[l][c]);
        }
        putchar('\n');
    }
} // end somaMatrizes

void subtracaoMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat)
{
    int subtrairMatrizes[tamMat][tamMat];

    puts("---- Mat1 - Mat2 ----");
    for (int l = 0; l < tamMat; l++)
    {
        for (int c = 0; c < tamMat; c++)
        {   
            subtrairMatrizes[l][c] = m1[l][c] - m2[l][c];
            printf(" %5d ", subtrairMatrizes[l][c]);
        }
        putchar('\n');
    }
} // end subtracaoMatrizes

void multiplicacaoMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat)
{
    int multiplicarMatrizes[tamMat][tamMat];

    puts("---- Mat1 X Mat2 ----");
    for (int l = 0; l < tamMat; l++)
    {
        for (int c = 0; c < tamMat; c++)
        {   
            multiplicarMatrizes[l][c] = m1[l][c] * m2[l][c];
            printf(" %5d ", multiplicarMatrizes[l][c]);
        }
        putchar('\n');
    }
} // end multiplicacaoMatrizes

void divisaoMatrizes(int m1[][tamMatriz], int m2[][tamMatriz], unsigned short tamMat)
{
    float dividirMatrizes[tamMat][tamMat];

    puts("---- Mat1 / Mat2 ----");
    for (int l = 0; l < tamMat; l++)
    {
        for (int c = 0; c < tamMat; c++)
        {   
            dividirMatrizes[l][c] = (float) m1[l][c] / m2[l][c];
            printf(" %5.2f ", dividirMatrizes[l][c]);
        }
        putchar('\n');
    }
} // end divisaoMatrizes