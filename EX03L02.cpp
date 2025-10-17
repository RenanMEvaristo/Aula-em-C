#include <stdio.h>
#include <stdlib.h>


/*

Faça um programa em C para trocar o valor de duas variáveis inteiras
sem utilizar nenhuma variável auxiliar.

*/




int main(){
	
	
	int a, b;
	
	printf("Digite o primeiro numero inteiro: \n");
	  scanf("%d", &a);
    printf("Digite o segundo numero inteiro: \n");
      scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b; 
    
    printf("Os numeros inversos sao: %d e %d \n", a, b);
    system("pause");
    return 0;

	
	
	
	
	
	
}
