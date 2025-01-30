// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
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
float valor = 635000000;
#define TAM 6
// --- Protótipo das Funções ---
void ganharQuadra(char n[50]);
/* void ganharQuina();
void ganharSena ()*/;
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50], res;
    unsigned short numerosSorteados[TAM], numerosApostados[TAM], totAcertos = 0;
    
    srand(time(NULL));

    do
    {
        puts("----------------- MEGA DA VIRADA (R$635 MILHÕES) -----------------");
        printf("Nome do jogador: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        for (int i = 0; i < TAM; i++)
        {
            printf("%s, digite o seu %dº número: ", nome,  i + 1);
            scanf("%hu", &numerosApostados[i]);
            while (numerosApostados[i] > 60)
            {
                puts("NÚMERO INVÁLIDO!! REPITA NOVAMENTE!!\n");
                system("clear");
                
                puts("----------------- MEGA DA VIRADA (R$635 MILHÕES) -----------------");
                printf("%s, digite o seu %dº número: ", nome,  i + 1);
                scanf("%hu", &numerosApostados[i]);
                }
            }
        
        puts("----------------------------------------------------------");
        puts("NÚMEROS APOSTADOS                 NÚMEROS SORTEADOS       ");
        for (int i = 0; i < TAM; i++)
            printf("[%hu] ", numerosApostados[i]);

        printf("                         ");
        for (int j = 0; j < TAM; j++)
        {
            numerosSorteados[j] = rand() % 2 + 1;
            
            printf("[%hu ]", numerosSorteados[j]);

            if (numerosApostados[j] == numerosSorteados[j])
                totAcertos++;
        }

        switch (totAcertos)
        {
        case 4:
            ganharQuadra(nome);
            break;

        case 5:
            /* ganharQuina(); */
            break;
        
        case 6:
            /* ganharSena(); */
            break;

        default:
            puts("INFELIZMENTE, NÃO GANHOU NADA!");
            break;
        }



        putchar('\n');
        printf("Acertos de %s: %hu!\n", nome, totAcertos);
        puts("----------------------------------------------------------");


        printf("Quer continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");
        getchar();
        totAcertos = 0;
    } while (res != 'n');

    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void ganharQuadra(char n[50])
{
    valor -= (valor * 0.25);
    printf("%s ganhou R$%.2f!\n", n, valor);
} // end ganharQuadra
