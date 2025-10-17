#include <stdio.h>
#include <stdlib.h>

/*

7. Solicitar dois valores e apresentar o maior e o menor. Caso sejam iguais, informar ao usuário.

*/



int main(){
	
	
	
	
	int val1, val2;
	
	
	printf("7. Solicitar dois valores e apresentar o maior e o menor. Caso sejam iguais, informar ao usuário.");
	printf("\n");
	
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &val1);
	printf("Digite o segundo valor: ");
	scanf("%d", &val2);
	
	if (val1 > val2) {
		printf("O valor %d eh maior que o valor %d.", val1, val2);
		
	}else{
		if (val2 > val1){
			printf("O valor %d eh maior que o valor %d.", val2, val1);
			
		}else{
			printf("Os valores sao iguais: %d e %d.", val1, val2);
		}
	}
	
	
	
	
	
}
