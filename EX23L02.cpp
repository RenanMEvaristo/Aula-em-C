#include <stdio.h>
#include <stdlib.h>

/*
23. Solicite um número inteiro e apresente o resto da divisão por 2 (usar
operador MOD ou %).
*/

int main(){
	
	int n1, res;
	
	printf("Digite um numero inteiro: ");
		scanf("%i", &n1);
		
	res = n1 % 2;
	
	printf("O resto da divisao por 2 eh: %i \n", res);
	
	system("pause");
	return 0;
	
		
		
	
	
}
