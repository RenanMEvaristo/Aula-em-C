#include <stdio.h>
#include <stdlib.h>

/*

10. Encontrar o Maior Número
Contexto: Um sistema precisa ler um conjunto fixo de dados e encontrar o maior valor.
Proposta: Solicite ao usuário quantos números ele irá digitar. Em seguida, use um laço for
para ler cada número e, ao final, exiba o maior número digitado.


*/


int main(){
	
	
	int rep, numero, prox;
	
	printf("Digite quantos numeros vc quer digitar: ");
	scanf("%d", &rep);
	
	prox = 0;
	for (int x = 1; x <= rep; x++){
		printf("Digite o %dº numero inteiro: \n", x);
		scanf("%d", &numero);
		if (numero > prox){
			prox = numero;
		}
		
		printf("O maior numero digitado foi: %d\n", prox);
		
	}	
	
	system("pause");
	return 0;
}
