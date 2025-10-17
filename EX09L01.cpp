#include <stdio.h>
#include <stdlib.h>



/*

--- Avaliação de Atendimento ---
Por favor, avalie nosso atendimento (B - Bom, R - Regular, P -
Péssimo):
B
Obrigado por sua avaliação: B.



*/


int main(){
	
	
	char nota;
	
	printf("Por favor, avalie nosso atendimento (B - Bom, R - Regular, P - Pessimo): ");
		  scanf("%c", &nota);
		  printf("A nota escolhida foi %c ", nota);
		  
		  
		  return 0;
	
	
}
