#include <stdio.h>
#include <stdlib.h>


int main() {
   
    float nota1,nota2,media;
    
    printf("primeira nota: \n\n");
    scanf("%f",&nota1);

    printf("segunda nota nota: \n\n");
    scanf("%f",&nota2);

 system("cls || clear");

    media = (nota1+nota2) /2;

   printf("media: %.2f \n \n",media);


    if (media >= 7){
        printf("aprovado");
    }
    else  {
        printf("reprovado");
    }
  
    
    

      return 0;
}


