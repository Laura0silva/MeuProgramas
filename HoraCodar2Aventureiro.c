#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int jogador, computador;
    srand(time(0));

    printf("---------------------- Bem vindo ao jogo de Jokenpô! ----------------------\n");
    printf("Menu de escolha:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite a sua escolha: ");
    scanf("%d", &jogador);

    computador = rand() % 3 + 1;
    switch (jogador)
    {
    case 1:
        printf("Jogador - Pedra x ");
        break;
    case 2:
        printf("Jogador - Papel x ");
        break;
    case 3:
        printf("Jogador - Tesoura x ");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    switch (computador)
    {
    case 1:
        printf("Pedra - Computador\n");
        break;
    case 2:
        printf("Papel - Computador\n");
        break;
    case 3: 
        printf("Tesoura - Computador\n");
        break;
    }

    if(computador == jogador){
        printf("Jogo Empatado!\n\n");
    }
    else if((computador % 3) + 1 == jogador){ 
        printf("Parabéns! Você ganhou!\n\n");
    }
    else {
        printf("Você perdeu.\n\n");
    }
    return 0;

}