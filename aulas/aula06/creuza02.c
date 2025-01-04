// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

// --- Função Principal ---
int main()
{
   // --- Declaração das variáveis ---
   float reais, dolares;

   puts("------ CONVERSOR DE DOLARES CREUZA ------"); 
   
   printf("Quantos reais eu tenho? R$");
   scanf("%f", &reais);
   dolares = reais / 2.20;
   
   printf("Posso ter US$%.2f!\n", dolares);

   return 0;
} // end main

