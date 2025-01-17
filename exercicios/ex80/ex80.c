// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e
    15 sorteados pelo computador. Depois disso, peça para o usuário digitar um
    número (chave) e seu programa deve mostrar em que posições essa chave foi
    encontrada. Mostre também quantas vezes a chave foi sorteada.
    Dia do programa: 15/01/2025
*/
#define VET 30
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[VET], chave, totVezesChaveEncontrada = 0, posicaoChave;

    puts("-------------- ACERTE A CHAVE --------------");

    srand(time(NULL));

    do
    {
        printf("Digite um número: ");
        scanf("%d", &chave);

        if (chave < 0 || chave > 15)
            puts("CHAVE INVÁLIDA! TENTE NOVAMENTE!\n");

    } while (chave < 0 || chave > 15);
    
    
    for (int i = 0; i < VET; i++)
    {
        vet[i] = rand() % 15 + 1;
        printf("[%d] = %d\n", i, vet[i]);
    }

    puts("---------------------------------------------");
    for (int i = 0; i < VET; i++)
    {
        if (vet[i] == chave)
        {
            totVezesChaveEncontrada++;
            posicaoChave = i;
            printf("Chave %d encontrada na posição: [%d]\n", chave, posicaoChave);
        }
    }
    if (totVezesChaveEncontrada == 1)
        printf("Chave %d encontrada %d vez!\n", chave, totVezesChaveEncontrada);
    else
        printf("Chave %d encontrada %d vezes!\n", chave, totVezesChaveEncontrada);

    return 0;
} // end main