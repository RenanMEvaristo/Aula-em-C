#include <stdio.h>
#include <stdlib.h>

/*


8. Desenhar uma Linha
Contexto: Uma ferramenta de design de interface de texto precisa desenhar elementos simples.
Proposta: Solicite um número e um caractere. Use um laço for para desenhar uma linha com o
caractere, repetido o número de vezes informado.

*/


int main(){

int numero, x;
char letra, texto;

printf("Digite um numero: ");
scanf("%d", &numero);
printf("Digite uma letra: ");
scanf(" %c", &letra);


for(x = 1; x <= numero; x++){
printf("%c", letra);


	
}

printf("%c \n", texto);

system("pause");
return 0;
}
