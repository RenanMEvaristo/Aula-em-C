#include <stdio.h>
#include <stdlib.h>

/*

*** Sistema de Credenciamento Tech Conference ***
Digite seu primeiro nome:
Maria
Digite o nome da sua empresa:
InovaTech
=========================
Crachá Gerado:
Nome: Maria
Empresa: InovaTech
=========================


*/

int main(){


	char  nome[20], n_emp[20];
	
	
	printf("Digite seu nome: \n");
	scanf("%s", nome);
	
	printf("Digite o nome da sua empresa:  \n");
	scanf("%s", n_emp);
	
	printf("==================== \n");
	printf("Cracha Gerado \n");
	printf("Nome: %s \n", nome);
	printf("Empresa: %s \n", n_emp);
	printf("==================== \n");
	
	return 0;
	




}
