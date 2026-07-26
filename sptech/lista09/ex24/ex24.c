// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Receba um número positivo do usuário, que é o limite da contagem;
    b) Receba um segundo número, para testes de divisibilidade, que deve
    estar entre 1 e o número informado em a);
    c) Ao clicar em "Somar Números", deve exibir todos os números múltiplos
    do número informado em b) entre 1 e o número informado em a);
    d) Ao final da contagem, exiba a frase "Soma dos Múltiplos: X", sendo X a
    soma de todos os números múltiplos do número informado pelo usuário
    Dia do programa: 22/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lLimite, lDivisor, lSomaMultiplos = 0;

    puts("---------------- VER MÚLTIPLOS  ----------------");

    printf("Digite o limite da contagem: ");
    scanf("%hd", &lLimite);

    printf("Digite o divisor: ");
    scanf("%hd", &lDivisor);

    for (int i = 1; i <= lLimite; i++)
    {
        if (lDivisor % i == 0)
        {
            lSomaMultiplos += i;
            printf("%d\n", i);
        }
    }
    printf("Soma dos Múltiplos: %hd!\n", lSomaMultiplos);

    return 0;
} // end main