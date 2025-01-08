// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Crie um jogo onde o computador vai sortear um número entre 1 e 5 o
    jogador vai tentar descobrir qual foi o valor sorteado.
    Dia do programa: 07/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short comp, numero;

    puts("----------------- ADIVINHE O NÚMERO -----------------");

    printf("Digite um número: ");
    scanf("%hu", &numero);

    if (numero > 5)
    {
        puts("NÚMERO FORA DO INTERVALO!");
        return 0;
    }

    srand(time(NULL));
    comp = rand() % 5 + 1;

    printf("Número sorteado: %d!\n", comp);
    if (numero == comp)
        puts("VOCÊ GANHOU, MÁQUINAS SÃO INFERIORES PARA SEMPRE!");
    else
        puts("COMPUTADOR GANHOU, MÁQUINAS DOMINARÃO O MUNDO!");

    return 0;
} // end main