// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) O usuário informa o sexo e se nasceu no Brasil
    b) Caso seja Homem e tenha nascido no Brasil, exiba “Você é homem e
    brasileiro!”
    c) Caso seja Homem e não tenha nascido no Brasil, exiba “Você é homem e
    estrangeiro!”
    d) Caso seja Mulher e tenha nascido no Brasil, exiba “Você é mulher e
    brasileira!”
    e) Caso seja Mulher e não tenha nascido no Brasil, exiba “Você é mulher e
    estrangeira!”
    Dia do programa: 05/01/2026 
*/
// --- Protótipo da Função ---
char *verificarCidadao(char pSexo, int pIsBrasileiro);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lSexo;
    int lIsBrasileiro;

    puts("------------------- CIDADÃO BRASILEIRO -------------------");

    do
    {
        printf("Informe o sexo [M/F]: ");
        scanf("%c", &lSexo);
        getchar();
    } while (lSexo != 'm' && lSexo != 'f');

    do 
    {
        puts("Voce nasceu no Brasil? ");
        puts("Digite 1 para sim e 0 para não");
        printf(">>> ");
        scanf("%d", &lIsBrasileiro);
        getchar();
    } while (lIsBrasileiro != 0 && lIsBrasileiro != 1);

    printf("%s\n", verificarCidadao(lSexo, lIsBrasileiro));

    return 0;
} // end main

// --- Desenvolvimento da Função ---
char *verificarCidadao(char pSexo, int pIsBrasileiro)
{
    if (pIsBrasileiro == 0)
        return pSexo == 'f' ? "Você é mulher e estrangeira!" : "Você é homem e estrangeiro!";
    
    return pSexo == 'f' ? "Você é mulher e brasileira!" : "Você é homem e brasileiro!";
}