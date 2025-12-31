// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) O usuário informa quantas horas por noite dorme
    b) Caso ele durma de 0 a 4, exiba "#zumbi"
    c) Caso ele durma mais de 4 até menos de 7, exiba "Pouca concentração"
    d) Caso ele durma de 7 a 9, exiba "Boa concentração"
    e) Caso ele durma mais de 9, exiba "Olha a preguiça!"
    Dia do programa: 30/12/2025
*/
// --- Protótipo da Função ---
void exibirMensagensDeSono(int pQtdHorasDormidas);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdHorasDormidas;

    puts("-------------- HORAS DE SONO --------------");
    
    printf("Quantas horas de sono você dorme? ");
    scanf("%hd", &lQtdHorasDormidas);

    exibirMensagensDeSono(lQtdHorasDormidas);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void exibirMensagensDeSono(int pQtdHorasDormidas)
{
    switch (pQtdHorasDormidas)
    {
    case 0: case 1: case 2: case 3: case 4:
        puts("#zumbi");
        break;
    case 5: case 6:
        puts("Pouca concentração!");
        break;
    case 7: case 8: case 9:
        puts("Boa concentração!");
        break;
    default:
        puts("Olha a preguiça!");
        break;
    }
}