#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
 
char nome[1000] = "";

int idade,nascimento;




    printf("Digite o seu nome \n \n" );
    scanf("%s", &nome);

    printf("digite o seu ano de nascimento \n");
    scanf("%d", &nascimento);
   

    system(" cls || clear"); // clear para Linux e cls para windows

    idade = 2023- nascimento;

    printf("%s tem %d anos de idade", nome, idade);
    
      
	return 0;		
	
}