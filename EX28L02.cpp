#include <stdio.h>
#include <stdlib.h>

/*
28. Solicite um valor e apresente 40% desse valor
*/


int main(){
	
	
	int valor, p_valor;
	
	printf("Digite um numero inteiro: ");
		scanf("%i", &valor);
		
		p_valor = valor * 1.40;
		
	printf("O valor com 40%% de aumento eh: %i\n", p_valor);
	
	system("pause");
	return 0;
	
	
	
}
