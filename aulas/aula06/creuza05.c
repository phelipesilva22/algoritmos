// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

// --- Função Principal ---
int main()
{
    // --- Declaração da variáveis ---
    unsigned int opcaoJuros, qtdParcelas, juros;
    float valorEmprestimo, valorEmprestimoJuros = 0.0, valorParcelasComJuros = 0.0;
    char res;

    do
    {
        puts("------ PARCELAS DE EMPRÉSTIMO CREUZA ------");
        puts("[1] - OPÇÃO 1 DE JUROS");
        puts("[2] - OPÇÃO 2 DE JUROS");
        puts("[3] - OPÇÃO 3 DE JUROS");
        printf("Informe sua opção: ");    
        scanf("%d", &opcaoJuros);

        puts("--------------------------------------------");
        printf("Qual é o valor do empréstimo? ");
        scanf("%f", &valorEmprestimo);

        printf("Quantas parcelas? ");
        scanf("%d", &qtdParcelas);

        switch(opcaoJuros)
        {
            case 1:
                juros = 20;
                valorEmprestimoJuros = valorEmprestimo * 1.20; // juros de 20%
                break;

            case 2:
                juros = 35;
                valorEmprestimoJuros = valorEmprestimo * 1.35;
                break;

            case 3:
                juros = 50;
                valorEmprestimoJuros = valorEmprestimo * 1.50; // juros de 50%
                break;

            default:
                puts("OPÇÃO INVÁLIDA!!");
                break;
        } // end switch
        
        valorParcelasComJuros = valorEmprestimoJuros / qtdParcelas;
        printf("VALOR TOTAL COM JUROS DE %d%%: R$%.2f!\n", juros, valorEmprestimoJuros);
        printf("SERÁ PAGO %d PARCELAS DE %.2f!\n", qtdParcelas, valorParcelasComJuros);

        puts("--------------------------------------------");
        puts("Deseja continuar? ");
        puts("s (sim) | n (nao) ");
        printf(">>> ");
        scanf(" %c", &res);
        system("clear");

    } while (res == 's'); // end while
    puts("--- FINALIZANDO O PROGRAMA ---");


    return 0;
} // end main