// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) O usuário informa seu sexo e sua idade
    b) Caso seja homem e menor de 18 anos, exiba "Você é homem jovem"
    c) Caso seja homem e idade a partir de 18 anos, exiba "Você é homem maior de idade"
    d) Caso seja mulher e menor de 18 anos, exiba "Você é mulher jovem"
    e) Caso seja mulher e idade a partir de 18 anos, exiba "Você é mulher maior de idade"
    Dia do programa: 28/12/2025
*/
// --- Protótipo da Função ---
char *situacaoPessoa(char pSexo, unsigned short pIdade);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lSexo;
    unsigned short lIdade;

    puts("--------------------- SITUAÇÃO DA PESSOA ---------------------");
    
    printf("Digite o sexo [M/F]: ");
    scanf("%c", &lSexo);
    getchar();

    printf("Digite a sua idade: ");
    scanf("%hd", &lIdade);

    printf("Sua situação: %s!\n", situacaoPessoa(lSexo, lIdade));

    return 0;
} // end main

// --- Desenvolvimento da Função ---
char *situacaoPessoa(char pSexo, unsigned short pIdade)
{
    if (pSexo == 'm' || pSexo == 'M')
        return pIdade < 18 ? "Você é homem jovem" : "Você é homem maior de idade"; 
    else if (pSexo == 'f' || pSexo == 'F')
        return pIdade < 18 ? "Você é mulher jovem" : "Você é mulher maior de idade"; 

    return "Idade ou sexo inválido";
}