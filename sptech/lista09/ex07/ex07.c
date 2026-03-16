// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Receba do usuário um número (tem que ser entre 20 e 100)
    b) Ao clicar num botão "Adoro múltiplos de 5"...
    c) Exiba, debaixo do botão, todos os múltiplos de 5 entre 0 e o número
    informado em a), um embaixo do outro. Ex: 5, 10, 15, 20...
    Dia do programa: 15/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lNumero;

    puts("---------------- MÚLTIPLOS DE 5 ----------------");

    printf("Digite um número: ");
    scanf("%hd", &lNumero);

    if (lNumero < 20 || lNumero > 100)
        puts("NÚMERO FORA DO INTERVALO! TENTE NOVAMENTE");
    else 
    {
        for (int i = 1; i <= lNumero; i++)
            if (i % 5 == 0)
                printf("%d ", i);
    }
    puts("\n--- PROGRAMA FINALIZANDO ---");
    
    return 0;
} // end main