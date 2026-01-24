// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa no qual um profissional de educação física possa
    determinar de forma mais rápida quais esportes uma pessoa tem uma boa
    altura para praticar.
    a) Solicite a altura do usuário;
    b) Ao clicar em "Analisar Estatura", deve aparecer abaixo uma dessas
    frases:
    "Você pode ser piloto de corrida" (altura até 1.65)
    "Você pode ser jogador de futebol" (altura +1.65 até 1.80)
    "Você pode ser jogador de vôlei ou basquete" (altura + 1.80)
    Dia do programa: 24/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lAlturaUsuario;

    puts("------------------- EDUCAÇÃO FÍSICA -------------------");

    printf("Qual é a sua altura? ");
    scanf("%f", &lAlturaUsuario);

    if (lAlturaUsuario <= 1.65)
        puts("Você pode ser piloto de corrida!");
    else if (lAlturaUsuario <= 1.80)
        puts("Você pode ser jogador de futebol!");
    else
        puts("Você pode ser jogador de basquete!");

    return 0;
} // end main