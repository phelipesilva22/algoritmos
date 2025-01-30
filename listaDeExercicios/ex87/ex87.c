// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que melhore o procedimento Gerador() da questão anterior
    para que mostre uma mensagem personalizada, passada como parâmetro.
    Ex: Ao chamar Gerador("Aprendendo Portugol") aparece:
    +-------=======------+
    Aprendendo Portugol
    +-------=======------+
    Dia do programa: 17/01/2025
*/
// --- Protótipo da Função ---
void Gerador(char *msg);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char mensagem[50];

    puts("------------------ MENSAGEM PERSONALIZADA ------------------");

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';

    Gerador(mensagem);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador(char *msg)
{   
    puts("+-------=======------+");
    printf("%s\n", msg);
    puts("+-------=======------+");
} // end Gerador