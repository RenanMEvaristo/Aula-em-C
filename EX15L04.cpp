#include <stdio.h>
#include <stdlib.h>

/*

5. Leitura de Nota V�lida
Contexto: Um sistema acad�mico precisa garantir que a nota digitada para um aluno esteja no
intervalo v�lido (0 a 10).
Proposta: Solicite a nota de um aluno. Use um la�o do-while para repetir a solicita��o at� que
uma nota v�lida seja inserida.

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
