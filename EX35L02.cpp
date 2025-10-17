#include <stdio.h>
#include <stdlib.h>


/*

35. Solicite o nome, idade, cidade e salário. Apresente todos os dados
com o salário reajustado em 9,45%.

*/

int main(){
	
	
	int idade;
	float sal;
	char nome[20], cidade[20];
	
	printf("Digite seu nome: ");
		scanf("%s", nome);
	printf("Digite sua cidade: ");
		scanf("%s", cidade);
	printf("Digite sua idade: ");
		scanf("%i", &idade);
	printf("Digite sua salario: ");
		scanf("%f", &sal);

// calculo salario -------------------
		
	sal = sal * 1.0945;

//------------------------------------	
	
	printf("Seus dados sao: \n");
	printf("Nome: %s \n", nome);
	printf("Sua cidade eh: %s \n", cidade);
	printf("Sua idade eh: %i\n", idade);
	printf("Sua salario com 9.45%% de reajuste eh: %.2f\n", sal);
	
	system("pause");
	return 0;

	
}
