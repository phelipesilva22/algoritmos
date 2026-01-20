// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Um grupo de amigos costuma se reunir na casa de um deles para comer
    pizza. Só que eles têm um trato de que o valor da pizza, quando dividido
    entre os amigos, não deve passar de 20,00 por amigo. Ajude-os criando
    um programa o qual:
    a) Pergunte o valor da pizza
    b) Pergunte a quantidade de amigos reunidos
    c) Ao clicar em "Rola a pizza?", calcule e exiba o valor que cada amigo vai
    pagar na pizza com uma frase na página como esta "Cada amigo vai pagar
    R$X pela pizza"
    d) Somente caso o valor por amigo passe de R$20,00, exiba também a
    frase "Deu ruim! Pizza muito cara!"
    Dia do programa: 17/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lValorPizza, lValorCadaAmigo;
    unsigned short lQtdAmigos;

    puts("--------------------- PIZZA ENTRE AMIGOS ---------------------");

    printf("Qual é o valor da pizza? R$");
    scanf("%f", &lValorPizza);

    printf("Quantos amigos comerão a pizza? ");
    scanf("%hd", &lQtdAmigos);

    lValorCadaAmigo = lValorPizza / lQtdAmigos;
    printf("Cada amigo vai pagar R$%.2f pela pizza!\n", lValorCadaAmigo);

    if (lValorCadaAmigo > 20)
        puts("Deu ruim! Pizza muito cara!");

    return 0;
} // end main