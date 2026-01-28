// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte qual dos seguintes times de São Paulo o usuário torce (São
    Paulo, Palmeiras, Corinthians, Santos);
    b) Ao clicar em "Fale sobre esse time", exiba abaixo:
    "Salve o Corinthians" -> com fundo preto e letra branca, se for Corinthians
    "Salve o alviverde imponente" -> com fundo verde e letra branca, se for
    Palmeiras
    "Agora quem dá a bola é o Santos" -> com fundo branco e letra preta, se
    for Santos
    "Salve o Tricolor paulista" -> com fundo preto e letra vermelha, se for São
    Paulo
    Dia do programa: 25/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lTimeCoracao[50];

    puts("------------------- TIME DO CORAÇÃO -------------------");

    printf("Qual é o seu time do coração? ");
    fgets(lTimeCoracao, sizeof(lTimeCoracao), stdin);
    lTimeCoracao[strcspn(lTimeCoracao, "\n")] = '\0';
    
    if (strcmp(lTimeCoracao, "Palmeiras") == 0)
        printf("\033[37;42mQuando o alviverde imponente...\n\033[0m");
    else if (strcmp(lTimeCoracao, "Corinthians") == 0)
        printf("\033[37;40mSalve o Corinthians\n\033[0m");
    else if (strcmp(lTimeCoracao, "Santos") == 0)
        printf("\033[30;47mAgora quem dá a bola é o Santos\n\033[0m");
    else if (strcmp(lTimeCoracao, "São Paulo") == 0)
        printf("\033[31;40mSalve o Tricolor paulista\n\033[0m");
    else
        puts("Você não torce para nenhum dos 4 grandes de São Paulo!");

    return 0;
} // end main