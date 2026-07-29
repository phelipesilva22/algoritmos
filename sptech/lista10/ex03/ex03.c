// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Ao clicar no botão "Quero um número cabalístico!", deve sortear e exibir
    na tela, um número entre 1 e 15
    b) Se o número sorteado for cabalístico (se for o número 3, 4, 7, 10 ou 12),
    deve aparecer uma frase abaixo do número, dizendo "Eu S2 números
    cabalísticos!"
    c) Se não for sorteado um número dentre os desejados, deve exibir "Ah, me
    dá um número bom na próxima!"
    Dia do programa: 28/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    srand(time(NULL));
    int numeroCabalistico = rand() % 15 + 1;

    puts("----------------- NÚMEROS CABALÍSTICOS -----------------");
    
    printf("NÚMERO CABALÍSTICO GERADO: %d!\n", numeroCabalistico);
    if (numeroCabalistico == 3  || 
        numeroCabalistico == 4  ||
        numeroCabalistico == 7  || 
        numeroCabalistico == 10 || 
        numeroCabalistico == 12)
        puts("Eu sou um dos números cabalísticos!");
    else
        puts("Ah, me dá um número bom na próxima!");

    return 0;
} // end main