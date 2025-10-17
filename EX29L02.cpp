#include <stdio.h>
#include <stdlib.h>


/*

29. Solicite dois valores e apresente a soma com acréscimo de 18%

*/


int main(){
	
	int num1, num2, porc;
	
	
	printf("29. Solicite dois valores e apresente a soma com acréscimo de 18%% \n");
	printf("Digite um numero inteiro: ");
		scanf("%i", &num1);
	printf("Digite outro numero inteiro: ");
		scanf("%i", &num2);
	
	porc = (num1+num2) * 1.18;
	
	printf("A soma dos valores com 18%% de acrescimo eh: %i \n", porc);
	
	system("pause");
	return 0;
	
	
	
}
