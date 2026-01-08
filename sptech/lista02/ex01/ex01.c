// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: 1. Crie um programa o qual:
    a) Tenha o campo "Cidade Natal"
    b) Tenha o campo "Ano de nascimento"
    c) Tenha o botão "Cadastrar"
    d) Ao clicar no botão, deve aparecer uma caixa de alerta com a frase:
    " Você nasceu na cidade de X em Y" - Onde X é o valor do campo em a) e Y é o valor do campo em b)
    Dia do programa: 07/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lCidadeNatal[50], lMensagemFinal;
    unsigned short lAnoNascimento;

    puts("------------ CIDADE NATAL ------------");

    printf("Cidade Natal: ");
    fgets(lCidadeNatal, sizeof(lCidadeNatal), stdin);
    lCidadeNatal[strcspn(lCidadeNatal, "\n")] = '\0';


    printf("Ano de Nascimento: ");
    scanf("%hd", &lAnoNascimento);

    printf("Deseja mostrar a mensagem final? (s) | (n): ");
    scanf(" %c", &lMensagemFinal);
    lMensagemFinal = tolower(lMensagemFinal);

    if (lMensagemFinal == 's')
        printf("Você nasceu na cidade de %s em %hd!\n", lCidadeNatal, lAnoNascimento); 
        

    return 0;
} // end main