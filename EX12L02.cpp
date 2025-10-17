#include <stdio.h>
#include <stdlib.h>

/*

Calcule e apresente o volume de um cone: Volume = (3,1416 * R² *
H) / 3



*/


int main(){
	
	
	
	float volume, raio, altura;
	
	printf("Digite o raio do cone: ");
		scanf("%f", &raio);
	printf("Digite a altura do cone: ");
		scanf("%f", &altura);
		
		raio = raio * raio;
		volume = (3.1416 * raio * altura) / 3;
		
		//printf("%f raio\n", raio); 			teste raio
		//printf("%f altura\n", altura);	teste altura
		
	printf("O volume do cone eh: %.2f \n", volume);
		
		system("pause");
		return 0;
	
}
