#include <stdio.h>
#include <stdlib.h>

/*

26. Gere 4 valores aleatórios e apresente os números e a soma total.


*/

int main(){
	
	
	int num1, num2, num3, num4, soma;
			
	num1 = rand() % 100;
	num2 = rand() % 100;
	num3 = rand() % 100;
	num4 = rand() % 100;
	
	
	
	printf("Gere 4 valores aleatórios e apresente os números e a soma total.\n");
	printf("O primeiro numero eh: %i\n", num1);
	printf("O segundo numero eh: %i\n", num2);
	printf("O terceiro eh: %i\n", num3);
	printf("O quarto eh: %i\n", num4);
	soma = num1+num2+num3+num4;
	printf("A soma dos 4 numeros aleatorios eh: %i\n", soma);
	
	system("pause");
	return 0;
	
	
	
	
}
