#include <stdio.h>
#include <stdlib.h>

/*

10. Encontrar o Maior N�mero
Contexto: Um sistema precisa ler um conjunto fixo de dados e encontrar o maior valor.
Proposta: Solicite ao usu�rio quantos n�meros ele ir� digitar. Em seguida, use um la�o for
para ler cada n�mero e, ao final, exiba o maior n�mero digitado.


*/


int main(){
	
	
	int rep, numero, prox;
	
	printf("Digite quantos numeros vc quer digitar: ");
	scanf("%d", &rep);
	
	prox = 0;
	for (int x = 1; x <= rep; x++){
		printf("Digite o %d� numero inteiro: \n", x);
		scanf("%d", &numero);
		if (numero > prox){
			prox = numero;
		}
		
		printf("O maior numero digitado foi: %d\n", prox);
		
	}	
	
	system("pause");
	return 0;
}
