#include <stdio.h>

int main(){
    char produtoA[30] = "Bioré cleasing oil", produtoB[30] = "Garnier sérum anti-manchas";
    unsigned int estoqueA = 1000, estoqueB = 2000;
    float valorA = 10.5, valorB = 20.75;
    unsigned int estoqueMinA = 500,estoqueMinB = 2100;
    double valorTotalA, valorTotalB;

    printf("Produto: %s tem estoque %u e valor unitário de R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto: %s tem estoque %u e valor unitário de R$ %.2f\n", produtoB, estoqueB, valorB);

    int resultadoA = estoqueA >= estoqueMinA;
    int resultadoB = estoqueB >= estoqueMinB;

    printf("O produto: %s tem estoque mínimo? %d\n", produtoA, resultadoA);
    printf("O produto: %s tem estoque mínimo? %d\n\n", produtoB, resultadoB);

    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;
    printf("Valor total de A (R$ %.2f) é maior q o total de B (R$ %.2f)? %d\n\n", valorTotalA, 
        valorTotalB, (valorTotalA > valorTotalB));

    return 0;
}