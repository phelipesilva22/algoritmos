// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
    um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
    quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, 
    sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int qtdDiasAlugados;
    float dist_km, valorContaFinal;

    puts("---------------- LOCADORA TÁ QUEBRADA ----------------");

    printf("Qual foi a distância percorrida pelo carro (KM)? ");
    scanf("%f", &dist_km);

    printf("Quantos dias foi alugado o carro? ");
    scanf("%hd", &qtdDiasAlugados);

    valorContaFinal = (qtdDiasAlugados * 90) + (dist_km * 0.20);
    printf("O preço total da conta é: R$%.2f!\n", valorContaFinal);
    
    return 0;
} // end main