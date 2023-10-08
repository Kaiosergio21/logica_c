
#include <stdio.h>
#include <stdlib.h>

int main() {
    int lasanha_price = 30;
    int frango_price = 20;
    int feijoada_price = 15;

    float price1, price2, price3, quantidade;

    printf("----cardapio----\n\n");
    printf("1. Lasanha\n");
    printf("2. Frango\n");
    printf("3. Feijoada\n");
    printf("----------------\n");
    
    printf("Escolha um prato (1 for Lasanha, 2 for Frango, 3 for Feijoada): ");
    int choice;
    scanf("%d", &choice);

    printf("Quantidade: ");
    scanf("%f", &quantidade);

    system("cls || clear");

    switch (choice) {
        case 1:
            price1 = quantidade * lasanha_price;
            printf("----Conta----\n\n");
            printf("Prato; lasanha");
            printf("Valor: %.2f\n\n", price1);
            break;
        case 2:
            price2 = quantidade * frango_price;
            printf("----Conta----\n\n");
             printf("Prato: frango");
            printf("Valor: %.2f\n\n", price2);
            break;
        case 3:
            price3 = quantidade * feijoada_price;
            printf("----Conta----\n\n");
             printf("Prato: feijoada");
            printf("Valor: %.2f\n\n", price3);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
