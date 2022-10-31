#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct soma{
	int num10;
	int num20;
 }soma;

 int matematica(soma *p);
 int mostra_matematica(soma *p);

int main(){
 soma *p = NULL;
 
 matematica(p);
 mostra_matematica(p);
 
	return 0;
}

 int matematica(soma *p){
 	
	int i;
	int num1, num2;
	int resul;
	
	resul = 0;
	num1 = 0;
	num2 = 0;

	for(i=0; i<1; i++){
		
		printf("\tCALCULADORA DE 2 NUMEROS\n");
		
		printf("\nDigite numero 1: ");
		
		scanf("%i", &num1);
		printf("N1: %i \n", num1);

	    
	   system("pause");
	   
		printf("\nDigite numero 2: ");
		
		scanf("%i", &num2);
		printf("N2: %i \n", num2);
			   system("pause");

		
		p = (num1 + num2);
		p++;
		  printf("\nResultado: %i \n", p);
			   system("pause");

        
	}
}
int mostra_matematica(soma *p){
   printf("Voltando pra função...\n");
  printf("Resultado: %i \n", p);
       system("pause");

}
