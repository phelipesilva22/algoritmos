// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Receba um número do usuário, que deve estar entre 0 e 100;
    b) Ao clicar no botão "Ver Divisores", deve exibir na tela, abaixo do botão,
    todos os divisores do número informado, como o exemplo abaixo, onde o
    usuário inseriu o número "10":
    Divisores do Número 10:
    1
    2
    5
    10
    OBS: para saber se o número é divisível por outro, o resto da divisão deve
    ser 0;
    Dia do programa: 20/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---     
    int lNumero;

    puts("------------------ VER DIVISORES ------------------");

    printf("Digite um número entre 0 e 100: ");
    fflush(stdout);
    scanf("%d", &lNumero);

    if (lNumero > 0 && lNumero <= 100)
    {   
        printf("Divisores do Número: %d\n", lNumero);
        for (int i = 1; i <= lNumero; i++)
        {
            if (lNumero % i == 0)
                printf("%d\n", i);
        }
    }
    else 
        puts("NÚMERO INVÁLIDO! TENTE NOVAMENTE!");

    return 0;
} // end main