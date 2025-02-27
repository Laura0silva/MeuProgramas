#include <stdio.h>

int main (){
    char estado1, estado2, codigo1[4], codigo2[4], 
    nome1[50], nome2[50];
    int populacao1, populacao2, pontTurism1, pontTurism2;
    float area1, area2, PIB1, PIB2;

    printf("Seja bem vindo ao jogo Super Trunfo\nVamos fazer o cadastro de 2 cartas, siga as instruções:");
    printf("\nDigite uma letra de 'A' a 'H' para o estado: ");
    scanf(" %c", &estado1);      // %s siginifica string

    printf("O código, letra do estado seguido de um número de 01 a 04: ");
    scanf("%3s", codigo1);    // %d significa inteiro, lembre sempre do & na frente

    printf("Nome da cidade: ");
    scanf("%s", &nome1);     // %f significa tipo double só q menor

    printf("Número de habitantes: ");
    scanf(" %d", &populacao1);

    printf("A área em km²: ");
    scanf("%f", &area1);

    printf("O PIB: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontTurism1);

    printf("\nAgora vamos cadastrar a segunda carta! ");
    printf("\nDigite uma letra de 'A' a 'H' para o estado: ");
    scanf(" %c", &estado2);      

    printf("O código, letra do estado seguido de um número de 01 a 04: ");
    scanf("%3s", codigo2);    

    printf("Nome da cidade: ");
    scanf("%s", &nome2);     

    printf("Número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("A área em km²: ");
    scanf("%f", &area2);

    printf("O PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontTurism2);

    printf("\n------------------ Carta 1: ------------------");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %2.f km²", area1);
    printf("\nPIB: %2.f milhões de reais", PIB1);
    printf("\nPontos Turísticos: %d", pontTurism1);

    printf("\n\n------------------ Carta 2: ------------------");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", nome2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %2.f km²", area2);
    printf("\nPIB: %2.f milhões de reais", PIB2);
    printf("\nPontos Turísticos: %d\n\n", pontTurism2);
    return 0;
}
