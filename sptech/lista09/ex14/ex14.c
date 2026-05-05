// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Deve ter dois campos para o usuário informar o intervalo crescente de
    números
    b) Deve ter um botão chamado "Curto 3 e 5!"
    c) Ao clicar nesse botão, devem aparecer QUASE todos os números entre o
    intervalo informado, porém...
    d) Se o número for múltiplo de 3, ao invés do número exiba "É TRI!". Se o
    número for múltiplo de 5, ao invés do número exiba "É PENTA!". Se o
    número for múltiplo de 3 e também de 5, ao invés do número exiba "É TRI!É
    PENTA!".
    #Ficadica: Use a técnica de dedução de múltiplos por uso do resto da
    divisão
    Dia do programa: 30/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lValor1, lValor2;

    puts("------------------ MÚLTIPLOS DE 3 E 5 ------------------");

    printf("Digite o primeiro número do intervalo: ");
    scanf("%d", &lValor1);

    printf("Digite o segundo número do intervalo: ");
    scanf("%d", &lValor2);

    if (lValor1 > lValor2)
        puts("Valor inválido!!");

    for (int i = lValor1; i <= lValor2; i++) 
    {
        if (i % 3 == 0 && i % 5 == 0)
            puts("É TRI! É PENTA!");
        else if (i % 3 == 0)
            puts("É TRI");
        else if (i % 5 == 0)
            puts("É PENTA!");
        else
            printf("%d\n", i);
    }

    return 0;
} // end main