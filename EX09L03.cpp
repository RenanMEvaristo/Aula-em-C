#include <stdio.h>
#include <stdlib.h>

/*

9. Solicitar 3 números distintos e apresentar o maior.

*/


int main(){
	
	int val1, val2, val3, maior;
	
	
printf("9. Solicitar 3 números distintos e apresentar o maior.");
printf("\n");



printf("Digite o primeiro valor inteiro: ");
scanf("%d", &val1);
printf("Digite o segundo valor inteiro: ");
scanf("%d", &val2);
printf("Digite o terceiro valor inteiro: ");
scanf("%d", &val3);

if (val1 > val2 && val1 > val3){
	maior = val1;
	
}else{
	if(val2 > val1 && val2 > val3){
		maior = val2;
	}else{
		maior = val3;
	}
}
	
	printf("O maior numero eh: %d", maior);
}
