#include <stdio.h>
#include <stdlib.h>

//Digite seu primeiro nome:
//Aparecido
//Olá, Aparecido! Seja bem-vindo ao mundo da programação em C.


int main(){
	
	char nome[20];
	
	
	printf("Digite seu primeiro nome. \n");
	scanf("%s", nome);
	printf("Ola %s! Seja bem vindo ao mundo da programação C!", nome);
	system("pause");
	return 0;
	
	
	
	
}
