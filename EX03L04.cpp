#include <stdio.h>
#include <stdlib.h>

/*

3. Soma de Números Pares
Contexto: Um sistema precisa calcular a soma de todos os números pares dentro de um
intervalo definido.
Proposta: Solicite um número limite. O programa deve usar um laço for para somar todos os
números pares de 1 até o número limite.

*/


int main(){
	
	int nLimite, x, par;
	float resto;
	
	printf("Digite um numero inteiro pra ser o limite do calculo: ");
	scanf("%d", &nLimite);

par = 0;
	
	for (x=1; x <= nLimite; x++){
		resto = x % 2;
		if (resto == 0){
		par = par + x;	
		}
	}
	
	printf("O calculo dos numeros pares do intervalo entre 1 e %d eh de: %d \n", nLimite, par);
	
	system("pause");
	return 0;
	
	
}
