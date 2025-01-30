// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números
    aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os
    números gerados e depois coloque o vetor em ordem crescente, mostrando no final
    os valores ordenados.
    Dia do programa: 17/01/2025
*/
#define TAM 20
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], aux;

    puts("-------------------- VETOR NORMAL --------------------");

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        vet[i] = rand() % 100;
        printf("[%d] = %d\n", i + 1, vet[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = i + 1; j < TAM; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    puts("-------------------- VETOR ORDENADO --------------------");
    for (int i = 0; i < TAM; i++)
        printf("[%d] = %d\n", i + 1, vet[i]);

    return 0;
} // end main