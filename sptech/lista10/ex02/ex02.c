// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Ao clicar no botão "Sortear momento do dia". Esse botão vai gerar uma
    hora aleatória entre 0 e 23 (apenas números inteiros).
    b) Em seguida, mostre na tela uma dessas frases:
    "Bom dia, flor do dia, são Xh!" (caso o horário for entre 0 e 11)
    "Boa tarde, já vai tarde! São Xh!" (caso o horário for entre 12 e 17)
    "Boa noite, durma bem! São Xh!" (caso o horário for entre 18 e 23)
    Onde X é um número inteiro sorteado, sem casas decimais.
    Dia do programa: 28/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    srand(time(NULL));
    int horario = rand() % 23;

    puts("--------------- MOMENTO DO DIA ---------------");

    if (horario <= 11)
        printf("Bom dia, flor do dia, são %d!\n", horario);
    else if (horario <= 17)
        printf("Boa tarde, já vai tarde! São %d!\n", horario);
    else 
        printf("Boa noite, durma bem! São %d!\n", horario);
    
    return 0;
} // end main