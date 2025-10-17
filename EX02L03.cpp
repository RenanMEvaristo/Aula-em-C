#include <stdio.h>
#include <stdlib.h>


/*
2. Solicitar a pontuação final de um jogador em uma partida. Informar se ele atingiu o recorde da
semana (pontuação mínima de 10.000 pontos)


*/

int main(){
	
	
	int pontos;
	
	printf("Digite o total de pontos do jogador: ");
	scanf("%d", &pontos);
	if (pontos <= 10000) {
		printf("Voce nao atingiu o recorde semanal de 10.000 pontos!");
		}else{
			
		printf("Voce atingiu o recorde semanal de 10.000 pontos!");
		
		}
		
		
	}
	
	

