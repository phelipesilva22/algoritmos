// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte o nome da pessoa que o usuário mais ama na vida;
    b) Pergunte o quanto o usuário a ama (um número inteiro);
    c) Ao clicar num botão "Expressar amor", devem aparecer, abaixo dele, N
    vezes (conforme o valor em b)) a frase indicada em a), como neste exemplo
    (considerando o nome "Lady Gaga" e que ama "3")
    1 - Lady Gaga, eu te amo! Sempre lembre disso!
    2 - Lady Gaga, eu te amo! Sempre lembre disso!
    3 - Lady Gaga, eu te amo! Sempre lembre disso!
    Dia do programa: 15/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lNomePessoa[50];
    unsigned short lQtdAmor;

    puts("--------------------- DEMONSTRE O SEU AMOR ---------------------");

    printf("Qual é a pessoa que você mais ama? ");
    fgets(lNomePessoa, sizeof(lNomePessoa), stdin);
    lNomePessoa[strcspn(lNomePessoa, "\n")] = '\0';

    printf("Informe sua quantidade de amor: ");
    scanf("%hd", &lQtdAmor);

    for (int i = 0; i < lQtdAmor; i++)
        printf("%d - %s\n", i + 1, lNomePessoa);
    
    return 0;
} // end main