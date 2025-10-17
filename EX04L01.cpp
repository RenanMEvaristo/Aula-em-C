#include <stdio.h>
#include <stdlib.h>

/*

Digite a primeira letra do seu nome:
J
Digite seu sexo (M/F):
M
A inicial do seu nome e J e seu sexo e M.
*/

int main(){
	
	
	char nome, sexo;
	
	printf("Digite a inicial do seu nome: \n");
	scanf("%s", &nome);
	printf("Qual o seu sexo? M para Masculino, F para Feminino ou O para Outros: \n");
	scanf("%s", &sexo);
	printf("A inicial do seu nome e: %s e seu sexo eh: %s. \n", nome, sexo);

	return 0;
	   	
	   	

	   	
	   	
	   	
	   }


	

