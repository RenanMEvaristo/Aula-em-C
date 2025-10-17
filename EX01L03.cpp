#include <stdio.h>
#include <stdlib.h>

/*

1. Solicitar o nickname e a idade de um jogador. Informar se ele pode participar de um campeonato



*/



int main(){
	
	char nome[40];
	int idade;
	
	
printf("SOLICITAR UM NOME E INFORMAR SE ELE PODE PARTICIPAR. > 18 ANOS");
printf("\n");	
	
	
	
	printf("Digite o seu nome: ");
	fgets(nome, 40, stdin);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18) {
		
		printf("Voce pode participar do campeonato!");
		}else{
		
		printf("Voce nao pode participar do campeonato!");
	}
		
}
	
	
	
	
	
	

