#include <stdlib.h>
#include <stdio.h>

/*

6. Simula��o de um Dado
Contexto: Um jogo de tabuleiro digital que permite ao jogador rolar um dado.
Proposta: Crie um programa que simule a rolagem de um dado (gere um n�mero aleat�rio de
1 a 6). Ap�s cada rolagem, pergunte ao usu�rio se ele quer rolar o dado novamente.


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
