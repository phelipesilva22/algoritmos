// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie uma página que solicite ao usuário que digite o nome do time que
    torce e quantos títulos o clube dele possui.
    a) Deve haver um botão com o texto "Amo meu time".
    b) Ao clicar no botão, deve aparecer uma frase como está numa caixinha
    de alerta:
    "O time X tem Y títulos" - Onde X e Y são os valores que o usuário digitou,
    claro
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lTitulosTime; 
    char lTimeCoracao[50];

    puts("--------------- TIME DO CORAÇÃO ---------------");

    printf("Digite o time que você torce: ");
    fgets(lTimeCoracao, sizeof(lTimeCoracao), stdin);
    lTimeCoracao[strcspn(lTimeCoracao, "\n")] = '\0';

    printf("Quantos títulos o %s conquistou? ", lTimeCoracao);
    scanf("%hd", &lTitulosTime);

    if (lTitulosTime == 1)
        printf("O time de coração %s e tem %hd título!\n", lTimeCoracao, lTitulosTime);
    else    
        printf("O time de coração é o %s e tem %hd títulos!\n", lTimeCoracao, lTitulosTime);

    return 0;
} // end main