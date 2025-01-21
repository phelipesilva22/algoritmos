// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre apenas nomes que começa com a letra escolhida pelo usuário
    Dia do programa: 20/01/2025
*/
#define TAM 10
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char soLetra[TAM][50], nome[50], letra, input[10];
    unsigned short tot = 0;

    puts("---------------------- LISTAGEM DE NOMES ----------------------");

    do {
        printf("Digite uma letra: ");
        fgets(input, sizeof(input), stdin);

        // Verifica se a entrada contém apenas uma letra e '\n'
        if (strlen(input) == 2 && isalpha(input[0])) {
            letra = toupper(input[0]);  // Converte para minúscula
            break;
        } else {
            puts("Entrada inválida. Digite apenas uma letra!\n");
        }

    } while (1); // Loop infinito até entrada válida

    for (int i = 0; i < TAM; i++)
    {
        printf("Pessoa %d\n", i + 1);
        printf("Digite seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        nome[0] = toupper(nome[0]);
        puts("----------------------------------------");
    
        if (nome[0] == letra)
        {
            strcpy(soLetra[tot], nome);
            tot++;
        }
    }

    for (int i = 0; i < tot; i++)
    {
        printf("%s\n", soLetra[i]);
    }

    return 0;
} // end main