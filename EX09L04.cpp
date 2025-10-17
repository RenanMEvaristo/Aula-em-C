#include <stdlib.h>
#include <stdio.h>

/*

9. Sequência de Fibonacci
Contexto: Um programa matemático precisa gerar os primeiros N termos da sequência de
Fibonacci.
Proposta: Solicite um número N. Gere e exiba os N primeiros termos da sequência de
Fibonacci (onde cada termo é a soma dos dois anteriores: 0, 1, 1, 2, 3, 5...).



*/

int main(){
	
	int numero;
	int t1, t2, prox;
	t1 = 0;
	t2 = 1;

	
	printf("Digite um numero de termos para a sequencia: ");
	scanf("%d", &numero);
	for (int x = 0; x <= numero; x++){
		printf("%d", t1);
		prox = t1 + t2;
		t1 = t2;
		t2 = prox;				
	}

system("pause");
return 0;	

	
}
