#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[1000] = "";
    int idade;
    float peso, altura;

    printf("Digite o seu nome: ");
    fgets(nome,1000,stdin);
    nome[strcspn(nome,"\n")]=0;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    system("cls || clear"); // Clear the screen (use "cls" for Windows and "clear" for Linux)

    printf("Nome: %s\n", nome);
    
    printf("Idade: %d anos\n", idade);
    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m\n", altura);

    return 0;
}
