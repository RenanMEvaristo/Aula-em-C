#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*

6. Contagem de Vogais
Contexto: Um processador de texto precisa contar o número de vogais em uma frase.
Proposta: Solicite uma palavra (sem espaços) e use um laço for para percorrer cada caractere,
contando quantas vogais ela possui.

*/

char palavra[100], letra;
int contador = 0, x, tamanho;

int main(){
	
	
	
	printf("Digite uma palavra sem espaços: ");
	scanf("%s", &palavra);
	tamanho = strlen(palavra);
 
	
	for (x = 0; x <= tamanho; x++){
		letra = tolower(palavra[x]);
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
			contador++;
		}
	}
 	
if (contador > 0){
	printf("Existem %d vogais. \n", contador);
	
}else{
	printf("Nao existem vogais! \n");
}
	system("pause");
	return 0;
	
	
}

