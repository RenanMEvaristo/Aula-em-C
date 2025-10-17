#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

 Contexto: Um sistema precisa de criar uma cópia de uma configuração importante antes de a
 modificar.
 Desafio: Crie um programa com uma string char config_original[] =
 "USER=root;PASS=123";. Use strcpy() para copiar esta configuração para uma nova variável
 char config_backup[50]; e exiba ambas para mostrar que a cópia foi bem-sucedida.
 */
 
 int main(){
 	
 	char config_original[] = "USER=root;PASS=123";
 	char config_backup[50];
 	
 	strcpy(config_backup, config_original);
 	printf("Original: %s\n", config_original);
 	printf("Copia: %s\n", config_backup);
 	
 	
 	
 	system("pause");
 	return 0;
 	
 	
 	
 }
