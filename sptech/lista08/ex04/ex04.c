// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Um novo banco eletrônico, o Banco Melete possui um sistema
    diferenciado de autenticação no qual pede um login, uma senha e uma 3ª
    informação pessoal, que pode ser o ano de nascimento ou o nome do
    animal de estimação do cliente. Crie um protótipo que simule a
    autenticação de um determinado cliente, o qual:
    a) Solicite o login, a senha e a informação pessoal ao usuário
    b) Ao clicar num botão "Autenticar", exiba uma dessas frases abaixo do
    botão:
    b.1.) "Usuário autenticado", caso o login seja "ana", a senha "braga" e a
    informação pessoal for ou "1949" ou "louro josé"
    b.2.) "Falha na autenticação", caso as regras de verificação em b.1)
    falhem
    Dia do programa: 17/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char login[50], lSenha[50], lInformacaoPessoal[50];

    puts("----------------------- BANCO MELETE -----------------------");

    printf("Digite seu login: ");
    fgets(login, sizeof(login), stdin);
    login[strcspn(login, "\n")] = '\0';

    printf("Digite sua senha: ");
    fgets(lSenha, sizeof(lSenha), stdin);
    lSenha[strcspn(lSenha, "\n")] = '\0';

    printf("Digite uma informação pessoal: ");
    fgets(lInformacaoPessoal, sizeof(lInformacaoPessoal), stdin);   
    lInformacaoPessoal[strcspn(lInformacaoPessoal, "\n")] = '\0';

    if (strcasecmp(login, "ana") == 0 && 
        strcasecmp(lSenha, "braga") == 0 && 
        (strcasecmp(lInformacaoPessoal, "1949") == 0 || strcasecmp(lInformacaoPessoal, "louro jose") == 0))
        puts("Usuário autenticado!");
    else
        puts("Falha na autenticação!");

    return 0;
} // end main