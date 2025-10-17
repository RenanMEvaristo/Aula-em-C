#include <stdlib.h>
#include <stdio.h>

/*

3. Jogo de Adivinhação
Contexto: Criar um jogo simples onde o usuário tenta adivinhar um número secreto.
Proposta: Defina um número secreto no código. Use um laço while para que o usuário
continue digitando palpites até acertar o número.


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
