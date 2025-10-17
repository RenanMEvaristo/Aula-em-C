#include <stdio.h>
#include <stdlib.h>


/*

32. Solicite nome, idade e sexo (M, F ou O). Calcule e apresente apenas o
valor do aumento salarial de 24,5%.

*/


int main(){
	
	char nome[20], sexo;
	int idade, sal;
	
	
	printf("\n32. Solicite nome, idade e sexo (M, F ou O). Calcule e apresente apenas o valor do aumento salarial de 24,5%%. ");
	
	printf("\nDigite o seu nome: ");
		scanf("%s", nome);
	printf("Digite seu salario: R$ ");
		scanf("%i", &sal);
	printf("Digite seu sexo, (M/F/O): ");
		scanf("%s", &sexo);
	printf("Digite sua idade: ");
		scanf("%i", &idade);
		
//Calculo salario + 24,5%

	sal = sal * 1.245;	
//-----------------------		
		
	printf("Ola %s, seu novo salario com aumento de 24,5%% eh de: %i \n", nome, sal);
	
	system("pause");
	return 0;
		
			
	
}
