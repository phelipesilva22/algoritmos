// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Todo mundo gosta de pizza! É um prato super
    democrático, pois existem sabores veganos, vegetarianos, sem glúten,
    "low carb" (pouco carboidrato), doces etc.
    Crie um programa o qual:
    a) Solicite o sabor e o preço da pizza;
    b) Solicite a quantidade de amigos que vão comer;
    c) Ao clicar num botão "Ver valor por amigo", calcule e exiba na tela uma
    frase como esta:
    Cada amigo vai colaborar com R$X para a pizza de Y.
    Obs: inclua no valor da pizza a caixinha do entregador que é sempre 10% do
    valor da pizza.
    Obs²: Y é o sabor da pizza;
    Dia do programa: 11/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lSaborPizza[50];
    float lPrecoPizza;
    unsigned short lQtdAmigos;

    puts("-------------------------  PIZZARIA DON JUAN -------------------------");

    printf("Qual é o sabor da pizza? ");
    fgets(lSaborPizza, sizeof(lSaborPizza), stdin);
    lSaborPizza[strcspn(lSaborPizza, "\n")] = '\0';

    printf("Qual é o valor da pizza de %s? R$", lSaborPizza);
    scanf("%f", &lPrecoPizza);

    printf("Quantos amigos irão comer a pizza de %s? ", lSaborPizza);
    scanf("%hd", &lQtdAmigos);

    lPrecoPizza *= 1.10;
    printf("Cada amigo vai colaborar com R$%.2f para a pizza de %s!\n", lPrecoPizza / lQtdAmigos, lSaborPizza);

    return 0;
} // end main