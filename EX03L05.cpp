#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

 Contexto: Um programa precisa de criar um nome de arquivo juntando um nome base com a
 sua extens�o.
 Desafio: Crie um programa com uma string char nome_arquivo[50] = "relatorio_";. Solicite ao
 utilizador o m�s (ex: "setembro"). Use strcat() para juntar o m�s ao nome do arquivo e, em
 seguida, junte a extens�o ".txt". Exiba o nome final do arquivo
 
 */
 
 int main(){
 	
 	char nome_arquivo[50] =  "relatorio_";
 	char mes[20];
 	
 	printf("Digite o mes:");
 	scanf("%s", &mes);
 	
 	strcat(nome_arquivo, mes);
 	strcat(nome_arquivo, ".txt");
 	printf("%s\n", nome_arquivo);
 	
 	system("pause");
 	return 0;
 	
 	
 	
 }
