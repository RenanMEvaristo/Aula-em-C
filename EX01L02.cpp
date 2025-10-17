#include <stdio.h>
#include <stdlib.h>


/* Crie um programa em C que permita fazer a conversão cambial entre
Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia
um valor em Reais e mostre o correspondente em Dólares.

*/


int main(){
	
	
	
	float real, dolar, cambio;
	
	printf("Digite um valor em Real R$: \n");
	scanf("%f", &real);
	
	cambio = real / 5.30;
	
	printf("O valor em dolares eh: USD %.2f", cambio);
	
	return 0;
	
	
	
}
