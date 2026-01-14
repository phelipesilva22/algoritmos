// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que:
    a) Pergunte ao usuário sua idade.
    b) Ao clicar num botão "Ir pra festa":
    b1) Caso a idade seja menor que 18, deve aparecer um alert com a frase
    "Pedir permissão pro responsável"
    b2) Sempre vai aparecer um alert com a palavra "#partiuFesta" ao final
    OBS: caso tenha 18 anos ou mais, deve somente a segunda mensagem.
    Dia do programa: 13/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lIdade;

    puts("---------------- FESTA EM IBIZA ----------------");

    printf("Digite a sua idade: ");
    scanf("%hd", &lIdade);

    char *lMensagem = lIdade < 18 ? "Pedir permissão pro responsável!\n#partiuFesta!\n" : "#partiuFesta!\n";
    printf("%s", lMensagem);
    return 0;
} // end main