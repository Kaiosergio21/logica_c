#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[1000] = "";

int idade,anodenascimento;


    printf("Digite o seu nome \n \n" );
    scanf("%s", &nome);

    printf("digite a sua idade \n");
    scanf("%d", &idade);
   

    system(" cls || clear"); // clear para Linux e cls para windows

    anodenascimento = 2023- idade;

    printf("%s nasceu em %d ", nome, anodenascimento);

    fflush(stdin); //
    
      
	return 0;		
	
}
