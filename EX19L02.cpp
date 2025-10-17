#include <stdio.h>
#include <stdlib.h>

/*
19. Leia 2 números e apresente a décima parte da subtração entre eles,
usando uma terceira variável.
*/


int main(){
	
	int num1, num2, res;
	
	printf("Digite o primeiro numero inteiro: ");
		scanf("%i", &num1);
	printf("Digite o segundo numero inteiro: ");
		scanf("%i", &num2);
	
	res = (num1-num2) / 10;
	
	printf("O resultado eh: %i\n", res);
	
	system("pause");
	return 0;
	
	
}
