#include <stdio.h>
#include <stdlib.h>

//Digite seu primeiro nome:
//Aparecido
//Ol�, Aparecido! Seja bem-vindo ao mundo da programa��o em C.


int main(){
	
	char nome[20];
	
	
	printf("Digite seu primeiro nome. \n");
	scanf("%s", nome);
	printf("Ola %s! Seja bem vindo ao mundo da programa��o C!", nome);
	system("pause");
	return 0;
	
	
	
	
}
