#include <stdio.h>
#include <stdlib.h>


/* Crie um programa em C que permita fazer a convers�o cambial entre
Reais e D�lares. Considere como taxa de c�mbio US$1,0 = R$5,30. Leia
um valor em Reais e mostre o correspondente em D�lares.

*/


int main(){
	
	
	
	float real, dolar, cambio;
	
	printf("Digite um valor em Real R$: \n");
	scanf("%f", &real);
	
	cambio = real / 5.30;
	
	printf("O valor em dolares eh: USD %.2f", cambio);
	
	return 0;
	
	
	
}
