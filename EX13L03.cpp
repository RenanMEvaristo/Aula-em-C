#include <stdio.h>
#include <stdlib.h>

/*
13. Solicitar o ano de nascimento e informar se o ano é bissexto ou não.

*/


int main(){
	
	int ano;
	
	
	printf("13. Solicitar o ano de nascimento e informar se o ano eh bissexto ou nao.\n");
	printf("\n");
	
	
	printf("Digite o nome do seu nascimento: ");
	scanf("%d", &ano);
	
	
	
	if ((ano % 400 == 0) || (ano % 4 == 0  && ano %  100 != 0)){
		
		printf("O ano %d eh bisexto. \n", ano);
		
	}else{
		printf("O ano NAO eh bisexto. \n", ano);
	}
		
	
	system("pause");
	return 0;
}
