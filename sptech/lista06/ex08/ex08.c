// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que simula um pequeno sistema de login assim:
    a) Pergunte o login do usuário;
    b) Pergunte a senha do usuário;
    c) Pergunte o código de segurança do usuário (é como se fosse uma
    segunda senha, só isso)
    d) Ao clicar em "Entrar":
    Caso o login seja "SPTech" e a senha seja "digital" e o código de segurança
    seja "123", exibir um alert com a frase "Usuário autenticado com sucesso"
    Caso contrário, exibir um alert com "Falha na autenticação"
    Dia do programa: 28/01/2026
*/
#define LOGIN "SPtech"
#define SENHA "digital"
#define COD_SEGURANCA 123
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lLogin[50], lSenha[50];
    int lCodigoSeguranca;

    puts("---------------------- LOGIN E CADASTRO ----------------------");

    printf("Login do usuário: ");
    fgets(lLogin, sizeof(lLogin), stdin);
    lLogin[strcspn(lLogin, "\n")] = '\0';

    printf("Senha do usuário: ");
    fgets(lSenha, sizeof(lSenha), stdin);
    lSenha[strcspn(lSenha, "\n")] = '\0';

    printf("Código de segurança: ");
    scanf("%d", &lCodigoSeguranca);

    if (strcmp(lLogin, LOGIN) == 0 && strcmp(lSenha, SENHA) == 0 && lCodigoSeguranca == COD_SEGURANCA)
        puts("Usuario autenticado com sucesso!");
    else 
        puts("Falha na autenticação!");

    return 0;
} // end main