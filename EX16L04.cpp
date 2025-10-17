#include <stdlib.h>
#include <stdio.h>

/*

6. Simulação de um Dado
Contexto: Um jogo de tabuleiro digital que permite ao jogador rolar um dado.
Proposta: Crie um programa que simule a rolagem de um dado (gere um número aleatório de
1 a 6). Após cada rolagem, pergunte ao usuário se ele quer rolar o dado novamente.


*/

int main(){
	
	
	
	int dado, cont;
	
	
	
	do{
	printf("Deseja rolar um dado? (1- SIM / 0 - NAO)");
	scanf("%d", &cont);
		if (cont == 1){
			dado = (rand() % 6)+1;
		printf("Resultado: %d\n", dado);
		}
	}while(cont == 1);
	
}
