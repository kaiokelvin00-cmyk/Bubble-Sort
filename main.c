/*
 * Projeto: Ordenacao de Precos de Produtos
 * Linguagem: C
 *
 * Objetivo:
 * Organizar os precos de 10 produtos do menor para o maior,
 * utilizando o algoritmo Bubble Sort.
 */

#include <stdio.h>

#define TAMANHO 10

int main(void) {
    // Array com os precos de 10 produtos de um supermercado.
    float precos[TAMANHO] = {
        19.90, 5.50, 32.00, 12.75, 8.99,
        45.90, 3.25, 27.49, 15.00, 10.50
    };

    int i, j;
    float temporario;

    printf("========================================\n");
    printf("   ORDENACAO DE PRECOS - BUBBLE SORT\n");
    printf("========================================\n");

    printf("\nCenario: precos de 10 produtos de um supermercado.\n");
    printf("Criterio: ordem crescente (menor para o maior).\n");

    // Mostra os valores antes da ordenacao.
    printf("\nPrecos antes da ordenacao:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("R$ %.2f", precos[i]);
        if (i < TAMANHO - 1) {
            printf(" | ");
        }
    }
    printf("\n");

    /*
     * Bubble Sort:
     * O laço externo controla as passagens pelo array.
     * A cada passagem, o maior valor ainda fora de ordem
     * vai sendo levado para o final.
     */
    for (i = 0; i < TAMANHO - 1; i++) {
        /*
         * O laço interno compara elementos adjacentes.
         * O limite diminui porque os valores finais já ficam
         * ordenados depois de cada passagem.
         */
        for (j = 0; j < TAMANHO - 1 - i; j++) {
            // Se o valor atual for maior que o próximo, troca.
            if (precos[j] > precos[j + 1]) {
                temporario = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temporario;
            }
        }
    }

    // Mostra os valores depois da ordenacao.
    printf("\nPrecos depois da ordenacao (crescente):\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("R$ %.2f", precos[i]);
        if (i < TAMANHO - 1) {
            printf(" | ");
        }
    }
    printf("\n");

    printf("\nMenor preco: R$ %.2f\n", precos[0]);
    printf("Maior preco: R$ %.2f\n", precos[TAMANHO - 1]);
    printf("\nOrdenacao concluida com Bubble Sort!\n");

    return 0;
}
