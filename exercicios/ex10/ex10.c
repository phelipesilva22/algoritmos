// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que leia a largura e altura de uma parede, calcule e
    mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
    sabendo que cada litro de tinta pinta uma área de 2metros quadrados.
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned int largura, altura;

    puts("------------- CONSTRUTORA TUTTI FRUTI -------------");

    printf("Digite o valor da largura (m²): ");
    scanf("%d", &largura);

    printf("Digite o valor da altura (m²): ");
    scanf("%d", &altura);

    printf("ÁREA: %d.00m²!\n", largura * altura);
    printf("Será necessário %dL de tinta para pintar a parede!\n", largura * altura / 2);
    
    return 0;
} // end main