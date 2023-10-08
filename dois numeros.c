#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {

 setlocale(LC_ALL,"portuguese");
   
   float n1,n2,soma,media,produto,menor,maior;
    	
     printf("Primeiro número:\n\n");
     scanf("%f",&n1);   

      printf("Segundo número:\n\n");
     scanf("%f",&n2);      
        
       soma = n1 + n2;
        
       media= (n1+n2)/2 ; 

       produto=n1*n2;

  system("cls || clear"); 
    
    n1 == n2 ? printf("%.1f é igual a %.1f \n\n",n1,n2):n1 > n2 ? printf("%.1f é maior que %.1f \n\n",n1,n2) : printf("%.1f é maior que %.1f \n\n",n2,n1); ; 

     /*
        if(n1 > n2){
          printf("%.1f é maior que %.1f \n\n",n1,n2);
       }

       else if(n1 == n2){
              printf("%.1f é igual a %.1f \n\n",n2,n1);
       }
       
       else{
         printf("%.1f é maior que %.1f \n\n",n2,n1);
 
}
  */  
 

   printf( "%.1f + %.1f = %.1f \n\n", n1, n2, soma);
   printf( "média entre %.1f e %.1f é igual a %.1f\n\n",n1, n2, media);
   printf( "%.1f x %.1f = %.1f\n\n", n1, n2, produto);     
        
        
        return 0;
}
