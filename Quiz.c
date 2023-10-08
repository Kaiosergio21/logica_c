
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main() {
    
     char resposta[1000];

     setlocale(LC_ALL,"portuguese");
    
    printf("Quem � o protagonistga de DBZ\n\n");
    printf("1. Vegeta\n");
    printf("2. Sua m�e\n");
    printf("3. Goku\n");
    printf("----------------\n");
    
    int choice;
    scanf("%d", &choice);

  

    system("cls || clear");

    switch (choice) {
        case 1:
            printf("Errado \n \n");
            printf("vegeta");
            break;
        case 2:
           
            printf("Errado \n \n");
            printf("sua m�e");
            break;
        case 3:
          
            printf("certo \n \n") ;
            printf("goku");
             
            break;
        default:
            printf("Op��o invalida!\n");
             return 1;
    }

  

    return 0;

    
}