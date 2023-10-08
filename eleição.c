 #include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[1000] = "";

int idade,anodenascimento;

//string e strcpy

    printf("Digite o seu nome \n \n" );
    scanf("%s", &nome);

    printf("digite o seu ano de nascimento\n");
    scanf("%d", &anodenascimento);
   

    system(" cls || clear"); // clear para Linux e cls para windows

    idade = 2023-anodenascimento;

    printf("%s tem %d anos \n", nome, idade);

      idade = 18 &&  idade <= 65 ? 
      printf("obrigado a votar"): 
      
      idade < 18 ? printf("não pode votar"): 
      
     idade > 65 ? printf("voto opcional"):

    fflush(stdin); //
    
      
	return 0;		
	
}
   
