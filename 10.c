#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL,"portuguese"); //mudar idioma e aceitar pontua��o do portugu�s

int numero;

    printf("Escreva um numero");
    scanf("%d",&numero);

     system("cls || clear");

     printf("%d\n \n",numero);

     numero == 10 ? printf("� igual a 10") : numero > 10 ? printf("�  maior que 10") : printf("� menor que 10"); // condicional ternario(serve tamb�m para javasciprt)

   
    return 0;     
}
