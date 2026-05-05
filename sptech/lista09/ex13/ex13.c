// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte de quantos em quantos dias o usuário faz musculação (é só
    uma informação, só 1 número, ok?)
    b) Ao clicar em "Exibir rotina mensal", mostre uma sequência de 30 frases,
    como neste exemplo:
    Dia 1 - Musculação
    Dia 2 - Comer, dormir etc
    Dia 3 - Comer, dormir etc
    Dia 4 - Musculação
    Dia 5 - Comer, dormir etc
    Dia 6 - Comer, dormir etc
    Dia 7 - Musculação
    ...
    Dia 30 - Comer, dormir etc
    O Dia 1 sempre é de "Musculação"
    Considere que, nesse exemplo, o usuário informou 3 no item a)   
    Dia do programa: 30/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lQtdDiasMusculacao;

    puts("------------------- MUSCULAÇÃO -------------------");

    printf("Quantos dias você faz musculação? ");
    scanf("%d", &lQtdDiasMusculacao);

    for (int i = 1; i <= 30; i++)
    {
       if ((i - 1) % lQtdDiasMusculacao == 0)
            printf("Dia %dº - Musculação\n", i);
        else 
            printf("Dia %dº - Comer, dormir etc\n", i);
    }

    return 0;
} // end main