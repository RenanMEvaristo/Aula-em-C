#include <stdio.h>
#include <stdlib.h>

/*  

Calcule e apresente o volume de um cilindro: Volume = 3,1416 * R²
* H

*/


int main(){
	
	float raio, altura, volume;
	
	printf("Digite o raio do cilindro: ");
	  scanf("%f", &raio);
	printf("Digite a altura do cilindro: ");
		scanf("%f", &altura);
		
		raio = raio*raio;
		
		volume = 3.1416 * raio * altura;
		
		printf("O volume do cilindro eh: %.2f", volume);
		
	system("pause");
	return 0;	
	
	
	
}
