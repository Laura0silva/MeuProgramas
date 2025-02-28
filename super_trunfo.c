#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das duas cartas
    char estado1, estado2, codigo1[3], codigo2[3], nome1[50], nome2[50];
    int populacao1, populacao2, pontTurism1, pontTurism2;
    float area1, area2, PIB1, PIB2, densPopular1, densPopular2, PIBperCap1, PIBperCap2;

    // Introdução ao jogo
    printf("Seja bem-vindo ao jogo Super Trunfo\nVamos fazer o cadastro de 2 cartas, siga as instruções:");

    // Cadastro da primeira carta
    printf("\nDigite uma letra de 'A' a 'H' para o estado: ");
    scanf(" %c", &estado1); // Lê o caractere do estado

    printf("O código, letra do estado seguido de um número de 01 a 04: ");
    scanf("%3s", codigo1); // Lê um código de até 3 caracteres

    printf("Nome da cidade: ");
    scanf("%s", nome1); // Lê o nome da cidade (apenas uma palavra)

    printf("Número de habitantes: ");
    scanf("%d", &populacao1); // Lê um número inteiro

    printf("A área em km²: ");
    scanf("%f", &area1); // Lê um número decimal

    printf("O PIB: ");
    scanf("%f", &PIB1); // Lê um número decimal

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontTurism1); // Lê um número inteiro

    densPopular1 = (float) populacao1 / area1;  // Calcula a densidade populacional
    PIBperCap1 = (float) PIB1 / populacao1;     // Calcula o PIB per capita

    // Cadastro da segunda carta
    printf("\nAgora vamos cadastrar a segunda carta!");

    printf("\nDigite uma letra de 'A' a 'H' para o estado: ");
    scanf(" %c", &estado2); // Lê o caractere do estado

    printf("O código, letra do estado seguido de um número de 01 a 04: ");
    scanf("%3s", codigo2); // Lê um código de até 3 caracteres

    printf("Nome da cidade: ");
    scanf("%s", nome2); // Lê o nome da cidade (apenas uma palavra)

    printf("Número de habitantes: ");
    scanf("%d", &populacao2); // Lê um número inteiro

    printf("A área em km²: ");
    scanf("%f", &area2); // Lê um número decimal

    printf("O PIB: ");
    scanf("%f", &PIB2); // Lê um número decimal

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontTurism2); // Lê um número inteiro

    densPopular2 = (float) populacao2 / area2;  // Calcula a densidade populacional
    PIBperCap2 = (float) PIB2 / populacao2;     // Calcula o PIB per capita

    // Exibição da primeira carta cadastrada
    printf("\n------------------ Carta 1: ------------------");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f milhões de reais", PIB1);
    printf("\nPontos Turísticos: %d", pontTurism1);
    printf("\nDensidade populacional: %.2f hab/km²", densPopular1);
    printf("\nPIB per capita: R$ %.2f", PIBperCap1);

    // Exibição da segunda carta cadastrada
    printf("\n\n------------------ Carta 2: ------------------");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", nome2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f milhões de reais", PIB2);
    printf("\nPontos Turísticos: %d", pontTurism2);
    printf("\nDensidade populacional: %.2f hab/km²", densPopular2);
    printf("\nPIB per capita: R$ %.2f\n\n", PIBperCap2);
    return 0;
}
