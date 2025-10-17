#include <stdio.h>
#include <stdlib.h>


/*

13. Calcule e apresente o volume de uma pirâmide: Volume = (L * L) *
(H / 3)


*/

int main(){
	
	float lado, altura, volume;
	
	printf("Digite o tamanho do lado da piramide: ");
		scanf("%f", &lado);
	printf("Digite a altura da piramide: ");
		scanf("%f", &altura);
		
		lado = lado * lado;
		altura = altura / 3;
		volume = (lado * altura) / 3;
		
		printf("%.2f lado\n", lado);
		printf("%.2f altura\n", altura);
		printf("%.2f volume\n", volume);
		
		printf("O volume da piramide eh: %.2f", volume);	

	system("pause");
	return 0;


}
