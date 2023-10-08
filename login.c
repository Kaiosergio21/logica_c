#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h> 


int main(int argc, char *argv[]) {

 setlocale(LC_ALL,"portuguese");

 char loginSalvo [1000]="Marta";
char senhasSalva [1000]="senai1234";
char login [1000];
char senha[1000];
//strcmp e o string comparator

    printf("login:");
    gets(login);       

    printf("senha:");
    gets(senha); 


    if(strcmp(login,loginSalvo) == 0 && strcmp(senha,senhasSalva) ==0){
       printf("Bem-vindo");

    } else {
        printf("Acesso negado");
    }     
   

         return 0;
}
