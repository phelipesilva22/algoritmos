// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Uma nutróloga deseja um programa que ajude-a no
    processo de avaliação do peso de crianças de 5 anos.
    Seu programa, ao ler o peso da criança, deve exibir uma dessas frases:
    ● Abaixo do peso (se peso até 13.5kg)
    ● Acima do peso (se peso maior que 21.2kg)
    ● Peso na média (se peso maior que 13.5kg até 21.2kg)
    ● Peso perfeito (se o peso for exatamente 18.3kg)
    Dia do programa: 24/01/2026
*/
#define EPS 0.01
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lPeso;

    puts("------------------------- NUTRÓLOGA INFANTIL -------------------------");

    printf("Qual é o seu peso (Kg)? ");
    scanf("%f", &lPeso);

    if (lPeso <= 13.5)
        puts("ABAIXO DO PESO!");
    else if (fabs(lPeso - 18.3) < EPS) 
        puts("PESO PERFEITO!");
    else if (lPeso <= 21.2)
        puts("PESO NA MÉDIA!");
    else 
        puts("ACIMA DO PESO!");

    return 0;
} // end main