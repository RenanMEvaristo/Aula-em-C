#include <stdio.h>
#include <stdlib.h>

/*
20. Fa�a o mesmo exerc�cio anterior sem utilizar uma terceira vari�vel
*/

int main(){
	
	int num1, num2;
	
	printf("Digite o primeiro numero inteiro: ");
		scanf("%i", &num1);
	printf("Digite o segundo numero inteiro: ");
		scanf("%i", &num2);
	
	num1 = (num1-num2) / 10;
	
	printf("O resultado eh: %i\n", num1);
	
	system("pause");
	return 0;
}
	
