// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Todo mundo adora pizza! Existem para todos os gostos! Crie um
    programa que ajude um grupo de amigos a saber quanto uma pizza vai
    custar para cada amigo.
    a) Solicite o valor da pizza e a quantidade de amigos que vão dividir o valor.
    b) Ao clicar num botão "#lovePizza", exiba um alerta com a frase
    "Cada um dos X amigos vai pagar R$Y"
    Onde X é a quantidade de amigos e Y é o resultado do cálculo que seu
    programa fará
    Dia do programa: 07/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lValorPizza;
    unsigned short lQtdAmigos;

    puts("------------------ PIZZA DOS AMIGOS ------------------");
    
    printf("Qual é o valor da pizza? R$");
    scanf("%f", &lValorPizza);

    printf("Quantidade de amigos que irão pagar a pizza: ");
    scanf("%hd", &lQtdAmigos);

    printf("Cada um dos %hd amigos vai pagar R$%.2f!\n", lQtdAmigos, (lValorPizza / lQtdAmigos));

    return 0;
} // end main