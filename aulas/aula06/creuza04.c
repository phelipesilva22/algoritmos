// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

// --- Função Principal ---
int main()
{
   // --- Declaração da variáveis ---
   float preco, imposto;

   puts("------- IMPOSTO MUAMBA CREUZA -------");

   printf("Qual o valor do produto? US$ ");
   scanf("%f", &preco);

   imposto = preco * 0.6;
   printf("O imposto das suas muambas será de R$%.2f!\n", imposto);

   return 0;
} // end main
