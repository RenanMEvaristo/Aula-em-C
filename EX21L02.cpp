#include <stdio.h>
#include <stdlib.h>


/*
21. Leia 5 números fornecidos pelo usuário e calcule a soma total.

*/


int main(){
	
	int n1, n2, n3, n4, n5;
	
	printf("Digite o primeiro numero inteiro: ");
		scanf("%i", &n1);
	printf("Digite o segundo numero inteiro: ");
		scanf("%i", &n2);
	printf("Digite o terceiro numero inteiro: ");
		scanf("%i", &n3);
	printf("Digite 1o quarto numero inteiro: ");
		scanf("%i", &n4);
	printf("Digite o quinto numero inteiro: ");
		scanf("%i", &n5);
		
	n1 = n1+n2+n3+n4+n5;
	
	printf("A soma total dos numeros eh: %i \n", n1);
	
	system("pause");
	return 0;
		
	
	
	
}
