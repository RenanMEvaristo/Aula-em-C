#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Contexto: Um sistema de cadastro precisa de verificar se um nome de utilizador já existe.
Desafio: Crie um programa que tenha um nome de utilizador "admin" guardado. Solicite ao
utilizador que digite um nome. Use strcmp() para verificar se o nome digitado é igual a
"admin" e informe o resultado.

*/


int main(){
	
	char nome[10], admin[10] = "admin";

	
	
	printf("Digite o nome do usuario (teste ""admin"")");
	scanf("%s", &nome);

if (strcmp(nome, admin) == 0) {
        printf("O nome de usuario %s ja existe!\n", admin);
    } else {
        printf("O nome de usuario %s esta disponivel.\n", nome);
    }
//	printf("%d",strcmp(nome, admin));
	
	
	
}
