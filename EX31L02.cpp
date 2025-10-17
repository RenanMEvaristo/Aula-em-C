#include <stdio.h>
#include <stdlib.h>

/*

31. Solicite o nome e salário de uma pessoa. Apresente o salário reduzido
em 12,6%.

*/

int main(){
	
	
	char nome[20];
	int salario;
	
	
	printf("Digite o seu nome: ");
		scanf("%s", nome);
	printf("Digite o seu salario: ");
		scanf("%i", &salario);
	
	salario = salario * 0.874;
	
	printf("Ola %s! Seu novo salario com 12,6%% de desconto eh: %i\n", nome, salario);
	
	system("pause");
	return 0;
	
	
}
