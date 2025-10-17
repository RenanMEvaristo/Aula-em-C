#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

 Contexto: Um sistema precisa de padronizar a entrada do utilizador, convertendo tudo para
 maiúsculas.
 Desafio: Solicite ao utilizador que digite o seu nome. Use a função strupr() para converter o
 nome para maiúsculas e exiba o resultado


*/


int main(){
	
	
	char nome[50];
	
	
	printf("Digite o seu nome:");
	fgets(nome, 50, stdin);
	
	strupr(nome);
//	strlwr(nome);
	printf("%s", nome);
	
	system("pause");
	return 0;
	
}
