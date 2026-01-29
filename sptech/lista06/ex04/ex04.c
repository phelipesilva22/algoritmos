// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: A Netflix é uma das plataformas que mais consomem e transferem
    dados em alguns países – o que cria alguns horários críticos. Entre 19h e
    21h, por exemplo, é comum que ocorram instabilidades na plataforma,
    porque é o período em que mais há gente assistindo ao conteúdo.
    Sabendo disso, crie um programa o qual:
    a) Peça ao usuário para informar a hora do dia que ele costuma acessar a
    Netflix
    b) Tenha um botão "Ver recomendação" que exiba abaixo dele a seguinte
    frase:
    Se o horário informado for entre as 19h e 21h - "Não é recomendável que
    você assista sua série favorita no horário X!".
    Caso contrário - "O horário X é adequado para assistir sua série favorita!"
    Dia do programa: 28/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lHorario;

    puts("--------------------- SÉRIE FAVORITA ---------------------");

    printf("Que horas você acessa a Netflix? ");
    scanf("%d", &lHorario);
    
    if (lHorario >= 19 && lHorario <= 21) 
        printf("Não é recomendável que você assista sua série favorita no horário %dh!\n", lHorario);
    else  
        printf("O horário %dh é adequado para assistir sua série favorita!\n", lHorario);
    
    return 0;
} // end main