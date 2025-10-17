#include <stdio.h>
#include <stdlib.h>


/*

Solicite o nome e o salário de uma pessoa. Calcule e apresente o novo
salário com um aumento de 28,5%.

*/


int main(){
	
	
	float salario, n_salario, aumento;
	char nome[20];
	
	
	printf("Digite o seu nome: ");
	  scanf("%s", &nome);
    printf("Digite o salario atual: R$ ");
      scanf("%f", &salario);
      
    aumento = 1.285;
    n_salario = salario * aumento;
    
	
	printf("Ola %s, seu novo salario com 28.5 por cento de aumento eh: R$%.2f\n", nome, n_salario);
	
	system("pause");
	return 0;	
	
}
