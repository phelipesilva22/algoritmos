// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Um estudante recebeu o Bilhete Único de estudante pela primeira vez e
    deseja saber quanto vai economizar por mês. O valor para estudante é
    metade do valor da passagem. Crie um programa que:
    a) Pergunte a ele o valor da passagem
    b) Pergunte a ele quantas viagens fará por mês
    c) Ao clicar num botão "Ver economia", deve ver um alerta com uma frase
    como esta: "Você economizará R$X por mês"
    Dia do programa: 07/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lValorPassagem, lMensalEstudante;
    unsigned short lQtdViagens;

    puts("---------------- ECONOMIA DA PASSAGEM ----------------");

    printf("Qual é o valor da passagem? R$");
    scanf("%f", &lValorPassagem);

    printf("Quantas viagens você fará no mês? ");
    scanf("%hd", &lQtdViagens);

    lMensalEstudante = (lValorPassagem / 2) * lQtdViagens;
    printf("Você economizará R$%.2f por mês!\n", lMensalEstudante);

    return 0;
} // end main