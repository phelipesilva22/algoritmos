// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite um intervalo crescente de valores numéricos
    b) Ao clicar num botão "S2 Pares"...
    c) Exiba, debaixo do botão, todos os números pares contidos no intervalo.
    Dia do programa: 16/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lIntervalo, lContador = 0;

    puts("------------------ INTERVALO PARES ------------------");

    printf("Digite um número: ");
    scanf("%d", &lIntervalo);

    while (lContador <= lIntervalo)
    {
        if (lContador % 2 == 0)
        {
            if (lContador + 1 >= lIntervalo)
                printf("%d ", lContador);      
            else
                printf("%d.. ", lContador);    
        }
      
        lContador++;
    }
    puts("\n--- PROGRAMA FINALIZADO ---");

    return 0;
} // end main