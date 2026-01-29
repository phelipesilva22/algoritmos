// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte a temperatura atual
    b) Ao clicar em "Ver situação"...
    c) Caso a temperatura seja entre 21 e 24, exibir um alert com a frase
    "Temperatura confortável :D"
    d) Caso a temperatura não estiver no intervalo definido em c), exibir um
    alert com a frase "Temperatura DESCONFORTÁVEL :C"
    Dia do programa: 28/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lTemperatura;
    
    puts("--------------------- SITUAÇÃO DA TEMPERATURA ---------------------");

    printf("Qual é a temperatura atual aqui? ");
    scanf("%f", &lTemperatura);

    char *lSituacao = lTemperatura >= 21 && lTemperatura <= 24 ? "Temperatura confortável :D\n" : "Temperatura DESCONFORTÁVEL C:\n";
    printf("%s", lSituacao);

    return 0;
} // end main