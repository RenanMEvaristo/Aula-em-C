#include <stdio.h>
#include <stdlib.h>



/*

14. Calcule e apresente o volume de um prisma: Volume = L1 * L2 * L3

*/


int main(){
	
	float l1, l2, l3, volume;
	
	printf("Digite o valor do primeiro lado do prisma: ");
		scanf("%f", &l1);
	printf("Digite o valor do segundo lado do prisma: ");
		scanf("%f", &l2);
	printf("Digite o valor do terceiro lado do prisma: ");
		scanf("%f", &l3);
		
	volume = l1 * l2 * l3;
	
	printf("O volume do prisma eh: %.2f", volume);
	
	system("pause");
	return 0;
	
	
	
}
