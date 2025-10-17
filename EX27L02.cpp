#include <stdio.h>
#include <stdlib.h>


/*
27. Gere 3 valores aleatórios e apresente-os em ordem inversa.

*/

int main(){
	
	int num1, num2, num3;
	
	num1 = rand() % 100;
	num2 = rand() % 100;
	num3 = rand() % 100;
	
	printf("27. Gere 3 valores aleatórios e apresente-os em ordem inversa. \n");
	printf("O primeiro numero eh: %i\n", num1);
	printf("O segundo numero eh: %i\n", num2);
	printf("O terceiro eh: %i\n", num3);
	printf("E sua ordem inversa eh: \n");
	printf("O primeiro numero eh: %i\n", num3);
	printf("O segundo numero eh: %i\n", num2);
	printf("O terceiro eh: %i\n", num1);
	
	system("pause");
	return 0;
	
	
	
}
