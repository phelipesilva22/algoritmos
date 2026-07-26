// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Refaça a questão anterior, de tal forma que:
    a) Ao exibir os divisores do número informado, caso o número seja divisível
    somente por 1 e por ele mesmo, exiba abaixo:
    "O número X é um número primo,"
    Dia do programa: 21/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---     
    int lNumero, lTotalDivisores = 0;

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
            {
                printf("%d\n", i);
                lTotalDivisores++;
            }
        }
        if (lTotalDivisores == 2)
            printf("O número %d é um número primo!\n", lNumero);
    }
    else 
        puts("NÚMERO INVÁLIDO! TENTE NOVAMENTE!");

    return 0;
} // end main