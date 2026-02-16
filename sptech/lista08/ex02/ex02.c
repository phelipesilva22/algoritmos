// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: O Tinder é uma plataforma de encontros, utilizada para dar “match” com
    pessoas que possuem interesses em comum, sejam eles aparência,
    gostos ou costumes.
    Robervaldo tem 1.85m de altura, mas, só se relaciona com pessoas
    menores que ele.
    Além disso, ele gosta de pessoas de cabelo castanho ou loiro.
    Com base nas informações, crie um simulador de Tinder no qual:
    a) Solicite a altura da pessoa encontrada
    b) Solicite a cor do cabelo da pessoa encontrada, dentre as opções:
    Preto
    Vermelho
    Amarelo
    Castanho
    c) Ao clicar em "Deu match?", mostre, abaixo:
    - A imagem de um cara feliz/empolgado, caso as características sejam
    Robervaldo goste;
    - Ou a imagem de um cara decepcionado em caso contrário
    Dia do programa: 12/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lAltura;
    unsigned short lCorCabelo;

    puts("-------------------- QUER NAMORAR COMIGO? --------------------");

    puts("[1] - PRETO");
    puts("[2] - VERMELHO");
    puts("[3] - AMARELO");
    puts("[4] - CASTANHO");
    printf("Qual é a cor do cabelo da pessoa? ");
    scanf("%hd", &lCorCabelo);

    printf("Qual é a altura da desejada? ");
    scanf("%f", &lAltura);

    switch (lCorCabelo)
    {
    case 1:
    case 2:
        printf("NÃO DEU MATCH 😢\n");
        break;
    case 3:
    case 4:
        if (lAltura < 1.85)
            printf("DEU MATCH 😆❤️!\n");
        else
            printf("NÃO DEU MATCH 😢\n");
        break;
    default:
        puts("CABELO NÃO ENCONTRADO!");
        break;
    }


    return 0;
} // end main