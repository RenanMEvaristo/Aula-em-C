#include <stdio.h>
#include <stdlib.h>

/*
24. Solicite o nome, idade, profissão e salário de uma pessoa. Apresente
os dados e o valor descontado do salário com base em um plano de saúde
de 1,3%.
*/

int main(){
	
	char prof[50], nome[50];
	int idade;
	float sal;
	
	printf("Digite o seu nome: ");
		scanf("%s", nome);
	printf("Digite sua profissao: ");
		scanf("%s", prof);
	printf("Digite sua idade: ");
		scanf("%i", &idade);
	printf("Digite seu salario: ");
		scanf("%f", &sal);
		
		

	sal = sal * 0.987;
	
	
	printf("\n--- Dados da Pessoa ---\n");
    printf("Nome: %s \n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Profissao: %s\n", prof);
    printf("Salario com desconto: R$ %.2f\n", sal);
	
	system("pause");
	return 0;
	
	
}

