// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: George Quisito está pesquisando por uma nova TV de 40"
    porque suspeita que o governador de seu estado irá prorrogar a
    quarentena por mais 1 mês e sua TV atual é de 22" apenas. Porém, ele é
    desconfiado com preços muito baixos e, claro, possiu um teto, um limite
    máximo que está disposto a pagar. Assim, crie para ele um programa o
    qual:
    a) Solicite a marca da TV (dentre as opções "Samsung", "LG", "Mondial" e
    "Britânia")
    b) Solicite o preço da TV
    c) Ao clicar em "Analisar compra", podem aparecer as seguintes
    mensagens na tela:
    c.1) "TV fora da faixa de preço", caso a TV custar menos que 800 ou mais
    que 2000
    c.2) "Na faixa de preço, porém marca não confiável", caso esteja na faixa
    entre 800 e 2000, porém for da "Mondial" ou "Britânia"
    c.3) Caso tenha exibido a mensagem de c.1), exiba também essa outra
    frase, caso custar menos de 800: "Preço baixo demais!". Ou, caso custar
    mais de 2000, exiba esta: "TV cara demais, infelizmente"
    c.4) Caso a TV esteja na faixa de preço e for da "LG" ou "Samsung", exiba
    "Essa TV pode entrar na sua lista!"
    Dia do programa: 11/02/2026
*/
#define SAMSUNG "SAMSUNG"
#define LG "LG"
#define MONDIAL "MONDIAL"
#define BRITANIA "BRITANIA"
// --- Protótipo da Função ---
void converterParaMaiuscula(char *pMarcaTv);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lMarcaTV[50];
    float lPreco;
    
    puts("------------------- COMPRAR UMA TELEVISÃO -------------------");

    printf("Qual marca de TV você prefere? ");
    fgets(lMarcaTV, sizeof(lMarcaTV), stdin);
    lMarcaTV[strcspn(lMarcaTV, "\n")] = '\0';

    printf("Qual é o valor da TV? R$");
    scanf("%f",&lPreco);

    converterParaMaiuscula(lMarcaTV);
    if (lPreco < 800)
    {
        puts("TV fora da faixa de preço!");
        puts("Preço baixa demais!");
    } else if (lPreco > 2000)
    {
        puts("TV fora da faixa de preço!");
        puts("TV cara demais, infelizmente!");
    } else
    {
        if (strcmp(lMarcaTV, MONDIAL) == 0 || strcmp(lMarcaTV, BRITANIA) == 0)
            puts("Na faixa de preço, porém marca não confiável!");
        else if (strcmp(lMarcaTV, SAMSUNG) == 0 || strcmp(lMarcaTV, LG) == 0)
            puts("Essa TV pode entrar na sua lista!");
        else
            puts("Marca de tv não encontrada!");
    }

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void converterParaMaiuscula(char *pMarcaTv)
{
    for (int i = 0; pMarcaTv[i] != '\0'; i++)
        pMarcaTv[i] = toupper(pMarcaTv[i]);
}