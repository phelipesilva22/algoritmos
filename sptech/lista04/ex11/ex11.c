// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite a quantidade de filhos que o usuário tem
    b) Tenha um botão "Analisar família". Ao clicar nele...
    c) Caso tenha 1 ou mais filhos, exiba na tela, abaixo do botão, a frase "Não
    tem TV"
    d) Caso tenha 2 ou mais filhos, exiba na tela, abaixo da frase em c), a frase
    "Não tem internet"
    e) Caso tenha 3 ou mais filhos, exiba na tela, abaixo da frase em d), a frase
    "Não tem video game"
    f) Caso tenha 4 ou mais filhos, exiba na tela, abaixo da frase em e), a frase
    "Não tem Netflix"
    OBS: Ou seja, caso o usuário informe que tenha, por exemplo, 4 ou mais
    filhos, devem aparecer as seguintes frases:
    Não tem TV
    Não tem internet
    Não tem video game
    Não tem Netflix
    Se tiver 2 filhos, deve exibir apenas "Não tem TV" e "Não tem internet", de
    acordo com as validações descritas acima
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdFilhos;

    puts("--------------------- A GRANDE FAMÍLIA ---------------------");
    
    printf("Quantas filhos você tem? ");
    scanf("%hd", &lQtdFilhos);

    if (lQtdFilhos <= 1)
        puts("Não tem tv!");
    else if (lQtdFilhos <= 2)
    {
        puts("Não tem tv!");
        puts("Não tem internet!");
    }
    else if (lQtdFilhos <= 3)
    {
        puts("Não tem tv!");
        puts("Não tem internet!");
        puts("Não tem video game!");
    }
    else 
    {
        puts("Não tem tv!");
        puts("Não tem internet!");
        puts("Não tem video game!");
        puts("Não tem Netflix!");
    }

    return 0;
} // end main