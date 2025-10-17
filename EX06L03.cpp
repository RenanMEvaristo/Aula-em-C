#include <stdlib.h>
#include <stdio.h>


/*

6. Solicitar dois valores distintos e informar qual é o maior.



*/


int main(){
	
int val1, val2;

printf("SOLICITAR DOIS VALORES E MOSTRAR O MAIOR. \n");
printf("\n");

	
printf("Digite um valor inteiro: ");
scanf("%d", &val1);
printf("Digite um outro valor inteiro: ");
scanf("%d", &val2);

if (val1 > val2){
	printf("O valor: %d eh maior que o valor %d.", val1, val2);
	} else {
		printf("O valor: %d eh maior que o valor %d.", val2, val1);
	}
}

	
	



