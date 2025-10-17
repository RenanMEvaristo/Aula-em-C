#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

 Contexto: Um sistema de mensagens precisa de mostrar ao utilizador quantos caracteres ele já
 digitou.
 Desafio: Solicite uma mensagem curta. Use strlen() para contar os caracteres e exiba a
 contagem para o utilizador.

*/

int main(){
	
	char frase[50];
	int tamanho;
	
	printf("Digite uma frase curta: ");
	fgets(frase, 50, stdin);
	
	tamanho = strlen(frase);
	printf("A frase tem %d caracteres", tamanho);
	
	system("pause");
	return 0;
	
	
}
