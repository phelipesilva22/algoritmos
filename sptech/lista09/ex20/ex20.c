// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: No filme clássico "Ghost, do outra lado da
    vida", o protagonista, para atazanar a vida da médium canta a seguinte
    canção...
    1 elefante incomoda muita gente!
    2 elefantes, incomodam, incomodam, muito mais!
    1 elefante incomoda muita gente!
    3 elefantes, incomodam, incomodam, incomodam, muito mais!
    1 elefante incomoda muita gente!
    4 elefantes, incomodam, incomodam, incomodam, incomodam, muito
    mais!
    ... e assim por diante
    Crie um programa o qual:
    a) Solicite ao usuário a quantidade elefantes;
    b) Ao clicar em "Atazanar a médium", exiba sempre o trecho da canção de 1
    elefante, seguido do trecho com 2 elefantes e depois 3... até a quantidade
    de elefantes indicado em a). Note que a palavra "incomodam" repete-se
    conforme essa mesma quantidade.
    Por exemplo, o se o usuário informar 4 em a), devem aparecer 3 estrofes,
    como no enunciado da questão, de "2 elefantes" até "4 elefantes", sempre
    repetindo a frase do "1 elefante incomoda muita gente" antes de cada
    estrofe.
    Dia do programa: 20/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdElefantes;

    puts("--------------- FILME GHOST: OUTRO LADO DA VIDA ---------------");

    printf("Qual é a quantidade de elefantes? ");
    scanf("%hd", &lQtdElefantes);

    const char* lPrimeiraMensagem = "1 elefante incomoda muita gente!";
    for (int i = 2; i <= lQtdElefantes; i++)
    {
        printf("%s\n", lPrimeiraMensagem); 
        printf("%d elefantes ", i);
        
        for (int j = 0; j < i; j++)
            printf("incomodam, ");
        
        printf("muito mais!\n");
    }

    return 0;
} // end main