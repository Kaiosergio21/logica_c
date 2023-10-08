#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL,"portuguese"); //mudar idioma e aceitar pontuação do português

int numero;

    printf("Escreva um numero");
    scanf("%d",&numero);

     system("cls || clear");

     printf("%d\n \n",numero);

     numero == 10 ? printf("É igual a 10") : numero > 10 ? printf("É  maior que 10") : printf("É menor que 10"); // condicional ternario(serve também para javasciprt)

   
    return 0;     
}
