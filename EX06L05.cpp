#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

 Contexto: Um sistema de exibi��o de not�cias precisa de mostrar apenas o in�cio de um t�tulo
 longo.
 Desafio: Crie uma string com um texto longo. Use strncpy() para copiar apenas os primeiros
 20 caracteres para uma nova string e exiba o resultado



*/

int main(){
	
	char noticia[50], copia[30];
	
	
	printf("Digite o nome da noticia");
	fgets(noticia, 50, stdin);
	strncpy(copia, noticia, 20);
	
	printf("%s", copia);
	
}
