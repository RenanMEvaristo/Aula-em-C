#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Contexto: Um sistema precisa de armazenar emails em minúsculas para evitar duplicados.
 Desafio: Solicite um endereço de e-mail. Use strlwr() para converter o e-mail para minúsculas
 e exiba o resultado.

*/


int main(){
	
	char email[50];
	
	printf("Digite o seu email: ");
	fgets(email, 50, stdin);
	
	strlwr(email);
	
	printf("%s", email);
	
	system("pause");
	return 0;
	
	
}
