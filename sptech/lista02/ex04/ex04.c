// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie uma página que solicite ao usuário que digite o nome da
    rua/avenida/vila e o número da casa onde mora.
    a) Deve haver um botão com o texto "Onde eu moro".
    b) Ao clicar no botão, deve aparecer uma frase como esta na página:
    "Seu logradouro é X" - Onde X é o valor que o usuário digitou no primeiro
    campo
    Na sequência da mensagem acima, deve aparecer:
    "O número do seu logradouro é Y" - Onde Y é o valor que o usuário digitou
    no segundo campo
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lNumeroLogradouro; 
    char lNomeLogradouro[50];

    puts("--------------- TIME DO CORAÇÃO ---------------");

    printf("Digite o nome do seu logradouro: ");
    fgets(lNomeLogradouro, sizeof(lNomeLogradouro), stdin);
    lNomeLogradouro[strcspn(lNomeLogradouro, "\n")] = '\0';

    printf("Qual é o número do endereço %s? ", lNomeLogradouro);
    scanf("%hd", &lNumeroLogradouro);

    printf("Seu logradouro é %s!\nO número do seu logradouro é %hd!\n", lNomeLogradouro, lNumeroLogradouro);

    return 0;
} // end main