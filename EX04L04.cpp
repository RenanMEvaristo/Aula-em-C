#include <stdio.h>
#include <stdlib.h>


/*

4. Cálculo de Fatorial
Contexto: Uma calculadora científica precisa da função de fatorial.
Proposta: Solicite um número inteiro não negativo e calcule seu fatorial. O fatorial de N (N!) é
o produto de todos os inteiros de 1 a N.

*/

int main(){
	
	
	int numero, fat;
	
	printf("Construir uma calculadora ciencitifca com a funcao fatorial \n");
	printf("\n");

		do{
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &numero);
		if (numero < 0){
			printf("O numero nao pode ser negativo!\n");
		}
		
		}while (numero < 0);

	fat = 1;
for (int x = 1; x <= numero; x++){
	fat = fat * x;
	
	
}

printf("O fatorial de %d eh: %d",numero, fat);


}

