// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que melhore o procedimento Gerador() da questão anterior
    para que mostre uma mensagem vários
    Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece:
    +-------=======------+
    Aprendendo Portugol
    Aprendendo Portugol
    Aprendendo Portugol
    Aprendendo Portugol
    +-------=======------+
    Dia do programa: 17/01/2025
*/
// --- Protótipo da Função ---
void Gerador(char *msg, unsigned short qtd);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char mensagem[50];
    unsigned short qtdVezesMensagem;

    puts("------------------ MENSAGEM PERSONALIZADA ------------------");

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("Quantidade de vezes da mensagem: ");
    scanf("%hu", &qtdVezesMensagem);

    Gerador(mensagem, qtdVezesMensagem);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador(char *msg, unsigned short qtd)
{   
    puts("+-------=======------+");
    for (int i = 0; i < qtd; i++)
        printf("%s\n", msg);
    puts("+-------=======------+");
} // end Gerador