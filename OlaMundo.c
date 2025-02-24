#include <stdio.h>

int main (){
    char nome[50];
    int idade;
    float altura;
    char teste;

    printf("Digite seu nome: ");
    scanf("%s", nome);      // %s siginifica string

    printf("Agora digite sua idade: ");
    scanf("%d", &idade);    // %d significa inteiro, lembre sempre do & na frente

    printf("Sua altura: ");
    scanf("%f", &altura);     // %f significa tipo double só q menor

    printf("Qualquer tecla: ");
    scanf(" %c", &teste);
    printf("Teste: %c", teste);

    printf("\nSeu nome é: %s, sua idade: %d e sua altura: %.2f\n\n", nome, idade, altura);
    return 0;
}
