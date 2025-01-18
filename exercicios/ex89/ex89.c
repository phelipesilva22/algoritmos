// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que melhore o procedimento Gerador() da questão anterior
    para que o programador possa escolher uma entre três bordas:
    +-------=======------+ Borda 1
    ~~~~~~~~:::::::~~~~~~~ Borda 2
    <<<<<<<<------->>>>>>> Borda 3
    Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
    ~~~~~~~~:::::::~~~~~~~
    Portugol Studio
    Portugol Studio
    Portugol Studio
    ~~~~~~~~:::::::~~~~~~~
    Dia do programa: 17/01/2025
*/
// --- Protótipo da Função ---
void Gerador(char *msg, unsigned short qtd, unsigned short bord);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char mensagem[50];
    unsigned short qtdVezesMensagem, borda;

    puts("------------------ MENSAGEM PERSONALIZADA ------------------");
    puts("BORDA [1] - +-------=======------+");
    puts("BORDA [2] - ~~~~~~~~:::::::~~~~~~~");
    puts("BORDA [3] - <<<<<<<<------->>>>>>>");
    printf("Escolha a borda: ");
    scanf("%hu", &borda);
    getchar();

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("Quantidade de vezes da mensagem: ");
    scanf("%hu", &qtdVezesMensagem);

    Gerador(mensagem, qtdVezesMensagem, borda);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador(char *msg, unsigned short qtd, unsigned short bord)
{
    char tipoBorda[23];
    switch (bord)
    {
    case 1:
        strcpy(tipoBorda, "+-------=======------+");
        break;
    case 2:
        strcpy(tipoBorda, "~~~~~~~~:::::::~~~~~~~");
        break;
    case 3:
        strcpy(tipoBorda, "<<<<<<<<------->>>>>>>");
        break;
    default:
        strcpy(tipoBorda, "BORDA INVÁLIDA!");
        break;
    }

    printf("%s\n", tipoBorda);
    for (int i = 0; i < qtd; i++)
        printf("%s\n", msg);
    printf("%s\n", tipoBorda);
} // end Gerador