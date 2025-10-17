#include <stdio.h>
#include <stdlib.h>


/*
17. Leia 3 números inteiros e calcule a multiplicação entre eles.
*/


int main(){
	
	int num1, num2, num3;
	
	printf("Digite o primeiro numero inteiro: ");
		scanf("%i", &num1);
	printf("Digite o segundo numero inteiro: ");
		scanf("%i", &num2);
	printf("Digite o terceiro numero inteiro: ");
		scanf("%i", &num3);
		
	num1 = num1 * num2 * num3;
	
	
	printf("A multiplicacao entre os numeros eh: %i \n", num1);
	
	system("pause");
	return 0;
	
	
}
