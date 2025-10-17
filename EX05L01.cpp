#include <stdio.h>
#include <stdlib.h>

/*

Digite seu primeiro nome:
Carlos
Digite sua idade:
25
Digite sua altura (em metros):
1.82
Cadastro realizado: Nome: Carlos, Idade: 25 anos, Altura: 1.82m

*/


int main(){
	
	
	char nome[50];
	double idade, altura;
	
	
	
	
	printf("Digite seu nome. \n");
	scanf("%s", nome);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite sua altura: \n");
	scanf("%d", &altura);
	
	printf("Seu nome eh: %s, sua idade eh: %d, sua altura eh: %d", nome, idade, altura);
	system("pause");
	
	return 0;
	
	
	
	
	
	
}
