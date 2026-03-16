// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Ao clicar num botão "Números cabalísticos"...
    c) Exiba, debaixo do botão, os números de 1 a 30, um embaixo do outro,
    PORÉM, não devem aparecer os números cabalísticos 3, 4, 7, 10 e 12.
    OBS: não se atenha ao termo "cabalístico", o que importa é somente travar
    essa sequência de números!
    Dia do programa: 15/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---

    puts("------------------ NÚMEROS CABALÍSTICOS ------------------");

    for (int i = 1; i <= 30; i++)
    {
        if (i != 3 && i != 4 && i != 7 && i != 10 && i != 12)
            printf("%d\n", i);
    }

    return 0;
} // end main