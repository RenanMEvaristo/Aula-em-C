#include <stdio.h>
#include <stdlib.h>


/*

33. Solicite dois valores e calcule: Soma dos dois, com desconto de 58%.

*/


int main(){
	
	int val1, val2;
	int soma;
	
	
	printf("33. Solicite dois valores e calcule: Soma dos dois, com desconto de 58%%.\n");
	
	printf("Digite um numero inteiro: ");
		scanf("%i", &val1);
	printf("Digite outro valor inteiro: ");
		scanf("%i", &val2);
		
	soma = (val1+val2) * 0.42;
	
	printf("A soma dos valores com 58%% de desconto eh de: %i \n", soma);
	
	system("pause");
	return 0;
	
}
