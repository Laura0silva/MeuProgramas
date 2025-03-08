#include <stdio.h>

int main(){
    float temperatura, umidade;
    int estoque;

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a umidade: ");
    scanf("%f", &umidade);
    printf("Digite o estoque: ");
    scanf("%d", &estoque);
    printf("\n");

    if(temperatura > 30)    printf("Alerta: Temperatura elevada!\n");
    else printf("Temperatura dentro dos parâmetros.\n");

    if(umidade >50)     printf("Alerta: Umidade elevada!\n");
    else printf("Umidade dentro dos parâmetros.\n");

    if(estoque < 1000)  printf("Alerta: Estoque está abaixo do mínimo!\n");
    else printf("Estoque está normal.\n");
    return 0;
}