// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte, numa input ou lista suspensa (select/option), qual a tabuada
    que o usuário quer ver na tela (2 a 9);
    b) Pergunte até que número a tabuada deve ser construída;
    c) Ao clicar no botão “Ver Tabuada”, exiba abaixo a tabuada como neste
    exemplo (considerando que o usuário escolheu a tabuada do 3 e para ir até
    o 12).
    3x1=3
    3x2=6
    3x3=9
    3 x 4 = 12
    3 x 5 = 15
    3 x 6 = 18
    3 x 7 = 21
    3 x 8 = 24
    3 x 9 = 27
    3 x 10 = 30
    3 x 11 = 33
    3 x 12 = 36
    d) Observar que quando o multiplicador for ímpar, a linha apareça na cor
    vermelha e quando for par, na cor azul. ex: "3 x 1 = 3" aparecer tudo em
    vermelho, mas "3 x 4 = 12" aparece tudo em azul.
    Dia do programa: 23/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lTabuada, limite;
    
    puts("-------------------- MULTIPLICADOR TABUADA --------------------");
    
    printf("Qual tabuada você deseja ver? ");
    scanf("%d", &lTabuada);

    printf("Qual é o número que você quer ir? ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; i++)
    {
        if (i % 2 == 0)
            printf("\033[34m");
        else 
            printf("\033[31m"); 
        printf("%d X %d = %d\n", lTabuada, i, lTabuada * i);
    }

    return 0;
} // end main