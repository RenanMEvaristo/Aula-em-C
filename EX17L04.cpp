#include <stdlib.h>
#include <stdio.h>


/*
7. Soma de N�meros Positivos
Contexto: Um programa que precisa somar uma s�rie de valores de entrada, mas deve
processar pelo menos um valor.
Proposta: Crie um programa que leia n�meros. Ele deve somar todos os n�meros positivos
digitados e parar quando um n�mero negativo for inserido. O programa deve funcionar
mesmo que o primeiro n�mero seja negativo.


*/

int main(){
	
	int numero, soma;
	numero = 0;
	do{
		printf("Digite um numero inteiro positivo, caso deseje encerrar digite um negativo: ");
		scanf("%d", &numero);
	if (numero >= 0){
	soma = soma + numero;
	}else{
		printf("Nao foram digitados numeros positivos!\n");
	}
	
		
		
	}while(numero >= 0);
	
	printf("A soma dos valores eh: %d\n", soma);
	
	system("pause");
	return 0;
}
