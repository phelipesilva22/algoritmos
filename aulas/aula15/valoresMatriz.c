// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que preencha uma matriz de 4ª ordem e exiba as seguintes informações:
    - A Soma da Diagonal Principal
    - Produto entre os valores da 2ª linha
    Dia do programa: 24/01/2025
*/
#define TAM 4
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int mat[TAM][TAM], somaDiagonalPrincipal = 0, produto2Linha = 1, 
        maiorValor3Coluna = 0, somaPrimeiraTerceiraLinha = 0, somaSegundaQuartaLinha = 0;

    puts("------------------- PREENCHER MATRIZ 4ª ORDEM -------------------");

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            mat[i][j] = rand() % 20 + 1;
            printf(" %3d ", mat[i][j]);

            if (i == j)
                somaDiagonalPrincipal += mat[i][j];

            if (i == 1)
                produto2Linha *= mat[1][j];

            if (j == 2 && mat[i][2] > maiorValor3Coluna)
                maiorValor3Coluna = mat[i][2];

            if (i == 0 || i == 2)
                somaPrimeiraTerceiraLinha += mat[i][j];
            else
                somaSegundaQuartaLinha += mat[i][j];
        }
        putchar('\n');
    }
    puts("---------------------------------------------------");
    printf("A soma da diagonal principal é: %d!\n", somaDiagonalPrincipal);
    printf("O produto entre os valores da 2ª linha é: %d!\n", produto2Linha);
    printf("O maior valor da 3ª coluna é: %d!\n", maiorValor3Coluna);
    printf("O resultado de %d - %d = %d!\n", somaPrimeiraTerceiraLinha, somaSegundaQuartaLinha, somaPrimeiraTerceiraLinha - somaSegundaQuartaLinha);

    return 0;
} // end main