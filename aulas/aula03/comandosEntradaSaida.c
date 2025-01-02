// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

// --- Função Principal ---
int main()
{
    // --- Declaração das variavéis ---
    float n1, n2;
    int valor;

    puts("------------ COMANDOS DE ENTRADA E SAÍDA ------------");

    printf("Digite um número: ");
    scanf("%f", &n1);

    printf("Digite outro número: ");
    scanf("%f", &n2);

    printf("Media da soma de %.2f + %.2f = %.2f é \n%.2f!\n", n1, n2, n1 + n2, (n1 + n2) / 2);

    valor = -50;
    printf("Valor absoluto de %d! é", valor);
    valor =  abs(valor);
    printf(" %d!\n", valor);

    return 0;
}