// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite a idade e o salário do usuário
    b) Ao clicar em "Analisar situação", deve aparecer uma dessas frases
    abaixo do botão...
    c) Menor de idade e liso, caso a idade seja menor que 18 e o salário for
    menor que 2500.
    d) Menor de idade e ostentação, caso a idade seja menor que 18 e o salário
    for a partir de 2500.
    e) Maior de idade e liso, caso a idade for a partir de 18 e o salário for menor
    que 3500.
    f) Maior de idade e ostentação, caso a idade for a partir de 18 e o salário for
    a partir de 3500 até 7000.
    g) Maior de idade e mega ostentação, caso a idade for a partir de 18 e o
    salário for maior que 7000.
    Dia do programa: 31/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lIdade;
    float lSalario;

    puts("---------------------------  SITUAÇÃO USUÁRIO ---------------------------");
    
    printf("Qual é a sua idade? ");
    scanf("%hd", &lIdade);

    printf("Qual é o valor do salário? R$");
    scanf("%f", &lSalario);

    if (lIdade < 18 && lSalario < 2500)
        puts("Menor de idade e liso!");
    else if (lIdade < 18 && lSalario >= 2500)
        puts("Menor de idade e ostentação!");
    else if (lIdade >= 18 && lSalario < 3500)
        puts("Maior de idade e liso!");
    else if (lIdade >= 18 && (lSalario >= 3500 && lSalario <= 7000))
        puts("Maior de idade e ostentação!");
    else if (lIdade >= 18 && lSalario > 7000)
        puts("Maior de idade e e mega ostentação!");
    return 0;
} // end main