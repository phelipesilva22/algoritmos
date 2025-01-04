// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned int ano_atual, ano_nasc, idade;
    
    puts("----- ANIVERSARIO DA CREUZA -----");

    printf("Em que ano nós estamos? ");
    scanf("%d", &ano_atual);

    printf("Em que ano eu nasci? ");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;
    printf("Minha idade será de: %d ANOS!\n", idade);
    printf("Terei que colocar %d velhinhas no meu bolo!\n", idade);

    return 0;
} // end main