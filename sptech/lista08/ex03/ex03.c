// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um pequeno simulador de preço de passagem de
    Bilhete Único de São Paulo num programa, o qual:
    a) Tenha uma combo para indicar o tipo de passageiro, com os itens
    Comum
    Estudante
    Idoso/PNE
    b) Tenha uma outra combo, para indicar o tipo de passagem, com os itens Passagem única
    Passagem integração
    c) Ao clicar num botão "Simular preço", considere que o preço unitário de
    uma passagem única é R$4,40 e que a integração é R$5,90 para fazer os
    cálculos necessários para exibir uma frase como esta:
    Valor da passagem escolhida: R$X,XX
    d) Considere ainda que um estudante tem 50% de desconto e idoso/PNE
    possuem gratuidade em qualquer tipo de passagem
    Dia do programa: 15/02/2026
*/
#define COMUM "COMUM"
#define ESTUDANTE "ESTUDANTE"
#define IDOSO_PNE "IDOSO"
// --- Protótipo da Função ---
void converterParaMaiuscula(char *pMensagem);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lTipoPassageiro[50], lTipoPassagem;
    float lPrecoPassagem = 0.00;

    puts("---------------- SPTRANS ----------------");

    printf("Qual é o tipo de passageiro? ");
    fgets(lTipoPassageiro, sizeof(lTipoPassageiro), stdin);
    lTipoPassageiro[strcspn(lTipoPassageiro, "\n")] = '\0';

    converterParaMaiuscula(lTipoPassageiro);

    printf("Qual é o tipo de passagem? Única (U) ou Integrada (I)? ");
    scanf(" %c", &lTipoPassagem);
    lTipoPassagem = toupper(lTipoPassagem);

    if (lTipoPassagem == 'U')
        lPrecoPassagem = 4.40;
    else if (lTipoPassagem == 'I')
        lPrecoPassagem = 5.90;

    if (strcmp(lTipoPassageiro, ESTUDANTE) == 0)
        lPrecoPassagem /= 2;
    else if (strcmp(lTipoPassageiro, IDOSO_PNE) == 0)
        lPrecoPassagem = 0.00;

    printf("Valor da passagem escolhida: R$%.2f\n", lPrecoPassagem);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void converterParaMaiuscula(char *pMensagem)
{
    for (int i = 0; pMensagem[i] != '\0'; i++)
        pMensagem[i] = toupper(pMensagem[i]);
}