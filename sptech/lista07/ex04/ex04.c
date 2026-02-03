// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que avalie a possibilidade de um
    pagamento da compra ser parcelado ou não.
    a) Pergunte o modo de pagamento dentre as seguintes opções:
    Dinheiro
    Cartão de débito
    Cartão de crédito
    Boleto
    b) Ao clicar num botão "Analisar compra", exiba uma dessa mensagens:
    "Você terá que pagar a vista", somente se o pagamento for dinheiro ou
    débito
    "Pagamento poderá ser parcelado", se o pagamento for crédito ou boleto
    Dia do programa: 02/02/2026
*/
#define PAG1 "DINHEIRO"
#define PAG2 "CARTAO DE DEBITO"
#define PAG3 "CARTAO DE CREDITO"
#define PAG4 "BOLETO"
// --- Protótipo da Função ---
void converterMaiuscula(char *str);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lTipoPagamento[50];

    puts("----------------------- FORMA DE PAGAMENTO -----------------------");

    printf("Qual é a forma de pagamento? ");
    fgets(lTipoPagamento, sizeof(lTipoPagamento), stdin);
    lTipoPagamento[strcspn(lTipoPagamento, "\n")] = '\0';
    
    converterMaiuscula(lTipoPagamento);

    if (strcmp(lTipoPagamento, PAG1) == 0 || strcmp(lTipoPagamento, PAG2) == 0)
        puts("Vocẽ terá que pagar a vista!");
    else if (strcmp(lTipoPagamento, PAG3) == 0 || strcmp(lTipoPagamento, PAG4) == 0)
        puts("Pagamento poderá ser parcelado!");
    else 
        puts("Tipo de pagamento não encontrado!");

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void converterMaiuscula(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] =  toupper(str[i]);
}