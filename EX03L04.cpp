#include <stdio.h>
#include <stdlib.h>

/*

3. Soma de N�meros Pares
Contexto: Um sistema precisa calcular a soma de todos os n�meros pares dentro de um
intervalo definido.
Proposta: Solicite um n�mero limite. O programa deve usar um la�o for para somar todos os
n�meros pares de 1 at� o n�mero limite.

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
