#include <stdio.h>
#include <stdlib.h>

/*

1. Tabuada de Multiplica��o
Contexto: Um professor precisa de uma ferramenta para gerar tabuadas.
Proposta: Solicite um n�mero e use um la�o for para exibir a tabuada desse n�mero, de 1 a 10.

*/


int main(){
	
	int x, numero;
	
	
	
	printf("Digite o numero da tabuada que desejar: ");
	scanf("%d", &numero);
	
	printf("Tabuada do: %d \n", numero);
	for (x=1; x <= 10; x++){
		printf("%d x %d = %d\n", numero, x, numero * x);
	}
	
	system("pause");
	return 0;
	
}
