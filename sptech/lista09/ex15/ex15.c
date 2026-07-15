// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que vá contando a idade do usuário e descrevendo
    sua fase na vida, considerando que:
    - Primeira Infância: 0 a 4 anos
    - Pré-escolar: + de 4 aos 6 anos
    - Segunda Infância: + de 6 aos 10 anos
    - Adolescência: + de 10 aos 18 anos
    - Adulto: + de 18 até os 50 anos
    - Melhor idade: + de 50 anos até 100 anos
    - Matusalém: + de 100 anos
    Assim, sua página HTML deve solicitar a idade do usuário. Na medida em
    que for digitando (pesquise por onkeyup ou oninput), deve aparecer uma
    contagem de idade e indicação de fase da vida abaixo como neste
    exemplo:
    0 anos (Primeira Infância)
    1 anos (Primeira Infância)
    2 anos (Primeira Infância)
    3 anos (Primeira Infância)
    4 anos (Primeira Infância)
    5 anos (Pré-escolar)
    6 anos (Pré-escolar)
    7 anos (Segunda Infância)
    ....
    A última linha deve ser a idade informada.
    Dia do programa: 06/05/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lIdade;

    puts("---------------------- FASES DA VIDA ----------------------");

    printf("Digite a idade: ");
    scanf("%hd", &lIdade);

    char *lMensagemFaseVida = "";
    for (int i = 0; i <= lIdade; i++)
    {
        if (i <= 4)
            lMensagemFaseVida = "Primeira infância";
        else if (i <= 6)
            lMensagemFaseVida = "Pré-escolar";
        else if (i <= 10)
            lMensagemFaseVida = "Segunda Infância";
        else if (i <= 18)
            lMensagemFaseVida = "Adolescência";
        else if (i <= 50)
            lMensagemFaseVida = "Adulto";
        else if (i <= 100)
            lMensagemFaseVida = "Melhor idade";
        else
            lMensagemFaseVida = "Matusalém";
            
        printf("%d anos (%s)\n", i, lMensagemFaseVida);
    }
    

    return 0;
} // end main