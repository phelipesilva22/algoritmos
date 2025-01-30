// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que pergunte a distância que um passageiro deseja
    percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para
    viagens até 200Km e R$0.45 para viagens mais longas.
    Dia do programa: 06/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short dist_km;

    puts("------------ LOCALIZA ZE POVINHO E D ------------");

    printf("Quantos KM o passageiro deseja percorrer? ");
    scanf("%hu", &dist_km);

    if (dist_km <= 200)
        printf("Preço da passagem: %.2f!\n", dist_km * 0.50);
    else
        printf("Preço da passagem: %.2f!\n", dist_km * 0.45);


    return 0;
} // end main