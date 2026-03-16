// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Receba um número (tem que estar entre 0 e 200);
    b) Ter um botão chamado "Viva o 7!"
    c) Ao clicar nesse botão, devem aparecer todos os múltiplos de 7 entre 0 e
    o número informado em a)
    Dia do programa: 16/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lNumero;

    puts("----------------- MÚLTIPLOS DE 7 -----------------");

    printf("Digite um número: ");
    scanf("%hd", &lNumero);

    if (lNumero > 200)
        puts("NÚMERO FORA DO INTERVALO! TENTE NOVAMENTE");
    else 
    {
        for (int i = 1; i <= lNumero; i++)
            if (i % 7 == 0)
                printf("%d ", i);
    }
    puts("\n--- PROGRAMA FINALIZANDO ---");

    return 0;
} // end main