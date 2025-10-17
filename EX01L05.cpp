#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Contexto: Um sistema de login precisa de garantir que as senhas tenham um tamanho mínimo
para serem consideradas seguras.
Desafio: Crie um programa que solicite ao utilizador uma senha. Use strlen() para verificar se
a senha tem 8 ou mais caracteres e informe ao utilizador se a senha é "Válida" ou "Inválida".

*/

int main(){
	
	char senha[20];
	int tamanho;
	
	
	do{
	printf("Digite uma senha com no minimo 8 caracteres: ");
	scanf("%s", &senha);
	tamanho = strlen(senha);
	if(tamanho <= 7){
		printf("A senha precisa ter 8 caracteres!\n");
	}
	}while(tamanho <=7);
	
	printf("Senha cadastrada com sucesso!\n");
	system("pause");
	return 0;
	
	
}
