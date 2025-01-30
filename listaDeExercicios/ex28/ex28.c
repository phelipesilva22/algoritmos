// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia a largura e o comprimento de um terreno
    retangular, calculando e mostrando a sua área em m². O programa também
    deve mostrar a classificação desse terreno, de acordo com a lista abaixo:
    - Abaixo de 100m² = TERRENO POPULAR
    - Entre 100m² e 500m² = TERRENO MASTER
    - Acima de 500m² = TERRENO VIP
    Dia do programa: 07/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float comprimento, largura, area;

    puts("-------------- CONSTRUTORA MEQUETREFE --------------");

    printf("Valor da largura do terreno (m²): ");
    scanf("%f", &largura);

    printf("Valor do comprimento do terreno (m²): ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    printf("ÁREA DO TERRENO RETANGULAR: %.2fm²!\n", area);

    if (area < 100)
        puts("TERRENO POPULAR!");
    else if (area <= 500)
        puts("TERRENO MASTER!");
    else
        puts("TERRENO VIP!");

    return 0;
} // end main