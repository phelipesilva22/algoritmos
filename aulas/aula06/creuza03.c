// --- Bibliotecas Iniciais 
#include <stdio.h>
#include <stdlib.h>

// --- Função Principal ---
int main()
{
  // --- Declaração das variáveis ---
  float fahrenheit, celsius;
  
  puts("------ TEMPERATURA VIAGEM CREUZA ------");
 
  printf("Qual é a temperatura atual? ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) / 1.8;
  
  printf("No Brasil estaria %.2fCº!\n", 
  celsius);

  return 0;
} // end main

