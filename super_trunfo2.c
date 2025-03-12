#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das duas cartas
    char estado1, estado2, codigo1[3], codigo2[3], nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    int pontTurism1, pontTurism2, escolha, escolha2, pontos1 = 0, pontos2 = 0;
    float area1, area2, PIB1, PIB2, densPopular1, densPopular2, PIBperCap1, PIBperCap2;
    float SuperPoder1, SuperPoder2, soma1, soma2;

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
    scanf("%lu", &populacao1); // Lê um número inteiro

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
    scanf("%lu", &populacao2); // Lê um número inteiro

    printf("A área em km²: ");
    scanf("%f", &area2); // Lê um número decimal

    printf("O PIB: ");
    scanf("%f", &PIB2); // Lê um número decimal

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontTurism2); // Lê um número inteiro

    densPopular2 = (float) populacao2 / area2;  // Calcula a densidade populacional
    PIBperCap2 = (float) PIB2 / populacao2;     // Calcula o PIB per capita

    // Calcula o super poder
    SuperPoder1 = (float) populacao1 + area1 + PIB1 + pontTurism1 + PIBperCap1 + ( 1 / densPopular1);  
    SuperPoder2 = populacao2 + area2 + PIB2 + pontTurism2 + PIBperCap2 + ( 1 / densPopular2);          

    // Exibição da primeira carta cadastrada
    printf("\n------------------ Carta 1: ------------------");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %3s", codigo1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulação: %lu", populacao1);
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
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f milhões de reais", PIB2);
    printf("\nPontos Turísticos: %d", pontTurism2);
    printf("\nDensidade populacional: %.2f hab/km²", densPopular2);
    printf("\nPIB per capita: R$ %.2f\n\n", PIBperCap2);

    //Comparação entre as 2 cartas + menu para escolher o atributo
    printf("<<<<<<<<<<<<<<<<<<< Hora do jogo! >>>>>>>>>>>>>>>>>>>\n");
    printf("Duelo de cartas: Escolha 2 dos atributos a seguir para a comparação!\n");
    printf("Aquele q tiver um valor maior vence!\n");
    printf("(Exceto a densidade demográfica - ganha a de menor valor)\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite a sua 1ª escolha: ");
    scanf("%d", &escolha);   //opção escolhida
    printf("Digite a sua 2ª escolha: ");
    scanf("%d", &escolha2);

    if(escolha == escolha2) printf("Você escolheu a mesma opção!\n");

    switch (escolha)   // Verifica qual atributo foi escolhido pelo jogador
    {
    case 1:     // Se a escolha for 1, compara a população
        printf("\nAtributo: População\n");
        printf("Carta 1: %s - %lu\n", nome1, populacao1);    // Exibe nome e população da carta 1
        printf("Carta 2: %s - %lu\n", nome2, populacao2);    // Exibe nome e população da carta 2
        soma1 = (float) populacao1;
        soma2 = (float) populacao2;
        break;
    case 2:     // Se a escolha for 2, compara a área
        printf("\nAtributo: Área\n");
        printf("Carta 1: %s - %.2f\n", nome1, area1);     // Exibe nome e área da carta 1
        printf("Carta 2: %s - %.2f\n", nome2, area2);     // Exibe nome e área da carta 2
        soma1 = area1;
        soma2 = area2;
        break;
    case 3:     // Se a escolha for 3, compara o PIB
        printf("\nAtributo: PIB\n");
        printf("Carta 1: %s - %.2f\n", nome1, PIB1);
        printf("Carta 2: %s - %.2f\n", nome2, PIB2);
        soma1 = PIB1;
        soma2 = PIB2;
        break;
    case 4:     // Se a escolha for 4, compara o pontos turísticos
        printf("\nAtributo: Pontos turísticos\n");
        printf("Carta 1: %s - %d\n", nome1, pontTurism1);
        printf("Carta 2: %s - %d\n", nome2, pontTurism2);
        soma1 = pontTurism1;
        soma2 = pontTurism2;
        break;
    case 5:     // Se a escolha for 5, compara a densidade demográfica
        printf("\nAtributo: Densidade demográfica\n");
        printf("Carta 1: %s - %.2f\n", nome1, densPopular1);
        printf("Carta 2: %s - %.2f\n", nome2, densPopular2);
        soma1 = densPopular1;
        soma2 = densPopular2;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    if(escolha != escolha2){
        switch (escolha2)   // Verifica qual atributo foi escolhido pelo jogador
        {
            case 1:     // Se a escolha for 1, compara a população
            printf("\nAtributo: População\n");
            printf("Carta 1: %s - %lu\n", nome1, populacao1);    // Exibe nome e população da carta 1
            printf("Carta 2: %s - %lu\n\n", nome2, populacao2);    // Exibe nome e população da carta 2
            soma1 += (float) populacao1;
            soma2 += (float) populacao2;
            break;
        case 2:     // Se a escolha for 2, compara a área
            printf("\nAtributo: Área\n");
            printf("Carta 1: %s - %.2f\n", nome1, area1);     // Exibe nome e área da carta 1
            printf("Carta 2: %s - %.2f\n\n", nome2, area2);     // Exibe nome e área da carta 2
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:     // Se a escolha for 3, compara o PIB
            printf("\nAtributo: PIB\n");
            printf("Carta 1: %s - %.2f\n", nome1, PIB1);
            printf("Carta 2: %s - %.2f\n\n", nome2, PIB2);
            soma1 += PIB1;
            soma2 += PIB2;
            break;
        case 4:     // Se a escolha for 4, compara o pontos turísticos
            printf("\nAtributo: Pontos turísticos\n");
            printf("Carta 1: %s - %d\n", nome1, pontTurism1);
            printf("Carta 2: %s - %d\n\n", nome2, pontTurism2);
            soma1 += pontTurism1;
            soma2 += pontTurism2;
            break;
        case 5:     // Se a escolha for 5, compara a densidade demográfica
            printf("\nAtributo: Densidade demográfica\n");
            printf("Carta 1: %s - %.2f\n", nome1, densPopular1);
            printf("Carta 2: %s - %.2f\n\n", nome2, densPopular2);
            soma1 += densPopular1;
            soma2 += densPopular2;
            break;
        default:
            printf("Opção inválida!\n\n");
            break;
        }
        printf("Soma dos 2 atributos da carta 1: %.2f\n", soma1);
        printf("Soma dos 2 atributos da carta 2: %.2f\n", soma2);
    }
    if(soma1 == soma2) printf("Empate!!\n");
    else{
        soma1 > soma2 ? printf("Vencedor: Carta 1!!!!\n") : printf("Vencedor: Carta 2!!!!\n");
    }
    return 0;
}
