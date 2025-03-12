#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int jogador, computador;
    char opcao;
    
    srand(time(0));
    computador = rand() % 100 + 1;

    printf("Bem vindo ao jogo do Maior, Menor ou igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &opcao);
    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &jogador);

    printf("Número gerado pelo computador: %d x número do jogador: %d\n", computador, jogador);
    switch (opcao)
    {
    case 'M':
    case 'm':
        jogador > computador ? printf("Parabéns! Você venceu!\n") : printf("Que pena! Você perdeu.\n");
        break;
    case 'N':
    case 'n':
        jogador < computador ? printf("Parabéns! Você venceu!\n") : printf("Que pena! Você perdeu.\n");
        break;
    case 'I':
    case 'i':
        jogador == computador ? printf("Parabéns! Você venceu!\n") : printf("Que pena! Você perdeu.\n");
        break;
    default:
        printf("Opção Inválida!!\n\n");
        break;
    }

    return 0;
}