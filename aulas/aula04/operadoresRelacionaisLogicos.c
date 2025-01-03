// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int L1, L2, L3, trianguloEquilatero, trianguloEscaleno, eTriangulo;

    puts("------ OPERADORES RELACIONAIS E LÓGICOS ------");
    printf("Digite o primeiro lado: ");
    scanf("%d", &L1);

    printf("Digite o segundo lado: ");
    scanf("%d", &L2);

    printf("Digite o terceiro lado: ");
    scanf("%d", &L3);

    eTriangulo = (L1 < L2 + L3) && (L2 < L1 + L3) && (L3 < L1 + L2);
    trianguloEquilatero = (L1 == L2) && (L2 == L3);
    trianguloEscaleno = (L1 != L2) && (L2 != L3) && (L1 != L3);

    printf("Pode formar um TRIÂNGULO? %d\n", eTriangulo);
    printf("O triangulo é EQUILATERO? %d!\n", trianguloEquilatero);
    printf("O triangulo é ESCALENO? %d!\n", trianguloEscaleno);

    return 0;
} // end main