#include <stdlib.h>
#include <stdio.h>

/*

3. Jogo de Adivinha��o
Contexto: Criar um jogo simples onde o usu�rio tenta adivinhar um n�mero secreto.
Proposta: Defina um n�mero secreto no c�digo. Use um la�o while para que o usu�rio
continue digitando palpites at� acertar o n�mero.


*/


int main(){
	
	int numeroS, numero;
	
	numeroS = 11;
	
	
	
	printf("Jogo de adivinhacao! Digite um numero(entre 0 a 20): ");
	scanf("%d", &numero);
	while(numero != numeroS){
		printf("Palpite errado! Tente novamente!: ");
		scanf("%d", &numero);
	}
	printf("Acertou! O numero secreto era: %d\n", numeroS);
	
	system("pause");
	return 0;
	
}
