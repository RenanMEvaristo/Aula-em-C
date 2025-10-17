#include <stdio.h>
#include <stdlib.h>
/*
3. Sobre um jogo, solicitar o número de moedas coletadas. Se for múltiplo de 50, informar que o
jogador ganhou uma vida extra; caso contrário, informar quantas moedas faltam para ganhar a
próxima vida


*/




int main(){
	
	int moedas, resto;
	
	
	
	
	printf("Digite a quantidade de moedas coletadas: ");
	scanf("%d", &moedas);
	
	resto = moedas % 50; 

/*
    if (resto == 0) {
        printf("Parabens! Voce ganhou uma vida extra!\n");
    } else {
        printf("Faltam %d moedas para ganhar uma vida extra.\n", 50 - resto);
    }
		system("pause");
    return 0;
}
*/


	
	if (resto == 0){
	
			printf("Voce ganhou uma vida extra!");
		} else{
			printf("Voce nao ganhou vidas extras!");
	}
}
	
