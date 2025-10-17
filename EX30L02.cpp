#include <stdio.h>
#include <stdlib.h>

/*

30. Solicite três valores e apresente a soma de: 46% do primeiro + 31%
do segundo + 14% do terceiro.

*/


int main(){
	
	float num1, num2, num3;
	float p1, p2, p3;
	float soma;
	
	p1 = 0.46;
	p2 = 0.31;
	p3 = 0.14;
	
	printf("Solicite três valores e apresente a soma de: 46%% do primeiro + 31%% do segundo + 14%% do terceiro.\n");
	
	printf("Digite o primeiro numero inteiro: ");
		scanf("%f", &num1);
	printf("Digite o segundo numero inteiro: ");
		scanf("%f", &num2);
	printf("Digite o terceiro numero inteiro: ");
		scanf("%f", &num3);
	
		
	num1 = num1 * p1;
	num2 = num2 * p2;
	num3 = num3 * p3;
	
	printf("O primeiro numero ficou como: %.2f\n", num1);
	printf("O segundo numero ficou como: %.2f\n", num2);
	printf("O terceiro numero ficou como: %.2f\n", num3);
	
	
	soma = num1+num2+num3;
	
	
	
	//printf("%f, %f, %f", num1, num2 ,num3); //teste calculo numeros
	//printf("%f, %f, %f", p1, p2, p3); // teste porcentagem
	
	printf("A soma dos 3 numeros eh: %.2f \n", soma);
	
	system("pause");
	return 0;
	
	
	
}
