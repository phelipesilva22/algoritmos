// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que simule a mega sena, onde o usuário informará os números da sua aposta e após esse procedimento, será mostrado os números sorteados.
    Por fim, mostrará ao apostador quantos números foram acertados e se recebeu algum dinheiro:
    - 6 NÚMEROS ACERTADOS (SENA)
    - 5 NÚMEROS ACERTADOS (QUINA)
    - 4 NÚMEROS ACERTADOS (QUADRA)
    Dia do programa: 29/01/2025
*/
#define TAM 3
// --- Protótipo das Funções ---

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50], res;
    unsigned short numerosSorteados[TAM], numerosApostados[TAM], totAcertos = 0;

    puts("----------------- MEGA DA VIRADA (R$635 MILHÕES) -----------------");

    srand(time(NULL));

    do
    {
        printf("Nome do jogador: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        for (int i = 0; i < TAM; i++)
        {
            printf("Digite o seu %dº número: ", i + 1);
            scanf("%hu", &numerosApostados[i]);
        }

        puts("NÚMEROS SORTEADOS");
        for (int j = 0; j < TAM; j++)
        {
            numerosSorteados[j] = rand() % 60 + 1;
            printf("[%hu] ", numerosSorteados[j]);
            
            if (numerosApostados[j] == numerosSorteados[j])
                totAcertos++;
        }
        putchar('\n');
        printf("Acertos do jogador %s: %hu!\n", nome, totAcertos);
        
        printf("Quer continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");
        getchar();
        
    } while (res != 'n');

    return 0;
} // end main

// --- Desenvolvimento das Funções ---