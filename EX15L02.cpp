#include <stdio.h>
#include <stdlib.h>


/*

15. Calcule e apresente o volume de uma esfera: Volume = (4/3) * 3,1416
* R³

*/


int main(){
	
	
	float volume, raio;
	
	printf("Digite o raio do circulo: ");
	  scanf("%f", &raio);
	
	
	raio = raio * raio * raio;
	volume = (4.0/3.0) * raio * 3.1416; // uso de ponto decimal para garantir divisão em ponto flutuante.


	
	printf("O Volume da esfera eh: %.2f", volume);
	
	system("pause");
	return 0;
	
	
}
