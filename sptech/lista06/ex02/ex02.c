// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que avaliará se uma pessoa tem direito à ajuda do
    governo na crise do Covid19:
    a) Solicite renda do usuário
    b) Solicite a renda total familiar do usuário
    c) Ao clicar em "Verificar ajuda", exibe um alert com uma dessas
    mensagens
    "Você terá direito!", caso a renda do usuário for até 1050 e a renda familiar
    for até 2100.
    "Você NÃO terá direito", caso contrário
    Dia do programa: 28/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lRendaIndividual, lRendaTotalFamiliar;

    puts("----------------- FAZ O L BEM DEVAGAR -----------------");

    printf("Qual é a sua renda? R$");
    scanf("%f", &lRendaIndividual);

    printf("Qual é a renda total da sua família? R$");
    scanf("%f", &lRendaTotalFamiliar);

    char *lTemDireito = lRendaIndividual <= 1500 && lRendaTotalFamiliar <= 2100 ? "Você terá direito!\n" : "Você NÃO terá direito!\n";
    printf("%s", lTemDireito);

    return 0;
} // end main