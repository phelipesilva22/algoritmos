// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que tenha um procedimento Gerador() que, quando chamado,
    mostre a mensagem "Olá, Mundo!" com algum componente visual (linhas)
    Ex: Ao chamar Gerador() aparece:
    +-------=======------+
    Olá, Mundo!
    +-------=======------+
    Dia do programa: 17/01/2025
*/
// --- Protótipo da Função ---
void Gerador();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    
    Gerador();
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador()
{
    puts("+--------=======-------+");
    puts("      Hello, World!     ");
    puts("+--------=======-------+");
} // end Gerador