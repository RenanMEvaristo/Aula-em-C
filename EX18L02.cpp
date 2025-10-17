#include <stdio.h>
#include <stdlib.h>


/*
18. Leia 3 números e calcule: (primeiro número + terceiro número) *
segundo número
*/


int main (){
	
	int num1, num2, num3;
	
	printf("Digite o primeiro numero inteiro: ");
		scanf("%i", &num1);
	printf("Digite o segundo numero inteiro: ");
		scanf("%i", &num2);
	printf("Digite o terceiro numero inteiro: ");
		scanf("%i", &num3);
		
	num1 = (num1+num3) * num2;
	
	printf("O resultado eh: %i", num1);
	
	system("pause");
	return 0;
	
	
	
}
