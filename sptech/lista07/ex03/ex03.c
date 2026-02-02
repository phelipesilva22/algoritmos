// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual ajudará o governo a saber se ele dará a ajuda
    emergencial ao Covid19 a um cidadão:
    a) Solicite o valor da renda individual do usuário
    b) Solicite o valor da renda familiar do usuário
    c) Ao clicar em "Terei o benefício", podem aparecer as seguintes
    mensagens:
    "Você terá direito ao auxílio", caso renda individual for até 2000 ou caso a
    renda familiar for até 3000
    "Sem direito ao auxílio", caso contrário
    Dia do programa: 01/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lRendaIndividual, lRendaFamiliar;

    puts("------------------------ FAZ O L ------------------------");

    printf("Informe o valor da sua renda individual: R$");
    scanf("%f", &lRendaIndividual);

    printf("Informe o valor da sua renda familiar: R$");
    scanf("%f", &lRendaFamiliar);

    char *lMensagemBeneficio = lRendaIndividual >= 2000 || lRendaFamiliar >= 3000 ? "Você terá direito ao auxílio!\n" : "Sem direito ao auxílio!\n";
    printf("%s", lMensagemBeneficio);

    return 0;
} // end main