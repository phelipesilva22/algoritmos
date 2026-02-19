// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa em que ajude a avaliar o clima de um
    ambiente, o qual:
    a) Solicite a temperatura
    b) Solicite a umidade do ar
    c) Ao clicar em 'Avaliar clima':
    c.1) Caso a umidade for inválida, ou seja, menor que 0 e maior que 100,
    exiba um alert "Valor de umidade inválido" e limpe qualquer outro texto que
    exista na tela (item c.2)
    c.2) Caso a umidade for válida, exiba uma dessas frases na própria
    página, abaixo do botão:
    "Clima agradável", caso a temperatura for entre 22 e 23 e a umidade
    for menor que 60.
    "Clima desconfortável", em caso contrário.
    Dia do programa: 18/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lTemperatura, lUmidadeAr;

    puts("----------------- TEMPERATURA AMBIENTE ------------------");

    printf("Qual é a temperatura do ar? ");
    scanf("%f", &lTemperatura);

    printf("Qual é a umidade do ar? ");
    scanf("%f", &lUmidadeAr);

    if (lUmidadeAr < 0 || lUmidadeAr > 100)
    {
        puts("Valor de umidade válido!");
        return 0;
    } else 
    {
        if (lTemperatura >= 22 && lTemperatura <= 23 && lUmidadeAr < 60)
            puts("Clima agradável!");
        else 
            puts("Clima desconfortável!");
    }

    return 0;
} // end main