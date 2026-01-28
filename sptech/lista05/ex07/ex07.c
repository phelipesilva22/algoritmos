// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Uma nutricionista precisa ajudar seus pacientes em com
    suas dietas. Ajude-a criando um programa o qual:
    a) Pergunte quantos pães franceses o usuário tem comido por dia;
    b) Pergunte quantos pacotes de bolacha recheada o usuário tem comido
    por dia;
    c) Pergunte quantos copos de achocolatado o usuário tem tomado por dia;
    d) Ao clicar em "Verificar calorias", calcule quantas calorias o usuário tem
    consumido com base nas 3 informações. Considere que um pão francês
    tem 50 calorias, um pacote de bolacha, 80 e um copo de achocolatado, 70.
    e) Após fazer o cálculo, exiba uma dessas frases, abaixo do botão:
    "Parabéns, vai ficar em forma!", caso as calorias sejam menores do que
    200.
    "Cuidado, vai ficar menos saudável !" caso as calorias sejam entre 200 e
    400.
    "Alerta crítico de saúde !!!", caso as calorias sejam mais de 400.
    Dia do programa: 25/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lQtdPaesFranceses, lQtdBolachaRecheada, lQtdCopoAchocolatado, lQtdCalorias;

    puts("------------------ DIETA FIT ------------------");

    printf("Quantos pães franceses você come por dia? ");
    scanf("%d", &lQtdPaesFranceses);

    printf("Quantos pacotes de bolacha recheada você come por dia? ");
    scanf("%d", &lQtdBolachaRecheada);

    printf("Quantos copos de achocolatado você come por dia? ");
    scanf("%d", &lQtdCopoAchocolatado);

    lQtdCalorias = (lQtdPaesFranceses * 50) + (lQtdBolachaRecheada * 80) + (lQtdCopoAchocolatado * 70);

    printf("Calorias: %dKg!\n", lQtdCalorias);
    if (lQtdCalorias < 200)
        puts("Parabéns, vai ficar em forma!");
    else if (lQtdCalorias <= 400)
        puts("Cuidado, vai ficar menos saudável!");
    else 
        puts("Alerta crítico de saúde!!!");

    return 0;
} // end main