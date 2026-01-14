// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Joka bebe com certa frequência e quer saber quanto consome de
    refrigerante em 1 ano. Para ajudá-lo a saber essa informação, crie um
    programa o qual:
    a) Pergunte quantas latinhas de refrigerante toma por dia
    b) Ao clicar num botão "Quantos refris?", calcule a quantidade de
    refrigerante que ele consome em 1 ano, considerando que 1 ano possui 365
    dias
    c) Exiba na página a quantidade de latinhas que ele consome por ano
    d) Somente caso a quantidade seja a partir de 500, exiba também a frase:
    "Cuidado com a diabetes!
    Dia do programa: 13/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdLatinhas;

    puts("------------------- CONSUMO DE REFRIGERANTE -------------------");
    printf("Quantas latinhas de refrigerante você toma por dia? ");
    scanf("%hd", &lQtdLatinhas);

    printf("Você consome %hd latinhas por ano!\n", lQtdLatinhas * 365);
    if (lQtdLatinhas * 365 >= 500)
        puts("Cuidado com a diabetes!");
        
    return 0;
} // end main