#include <stdio.h>
#include <stdlib.h>

/*

5. Leitura de Nota Válida
Contexto: Um sistema acadêmico precisa garantir que a nota digitada para um aluno esteja no
intervalo válido (0 a 10).
Proposta: Solicite a nota de um aluno. Use um laço do-while para repetir a solicitação até que
uma nota válida seja inserida.

*/

int main(){
	
	int nota;

do{
printf("Digite a nota do academico: ");
scanf("%d", &nota);	
}while(nota <= 0 || nota >= 10);


system("pause");
return 0;
	
	
	
}
