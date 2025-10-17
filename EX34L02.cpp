#include <stdlib.h>
#include <stdio.h>


/*

34. Solicite dois valores, calcule a soma entre eles e apresente o resto da
divisão por 3.

*/

int main(){
	
	int val1, val2;
	int soma;
	
	
	printf("Digite um numero inteiro: ");
		scanf("%i", &val1);
	printf("Digite outro numero inteiro: ");
		scanf("%i", &val2);
		
	soma = (val1+val2) % 3;
	
	printf("O resto da soma dos valores divido por 3 eh: %i\n", soma);
	
	system("pause");
	return 0;
	
	
}
