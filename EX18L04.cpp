#include <stdio.h>
#include <stdlib.h>

/*

8. Controle de Acesso por Cart�o
Contexto: Simular uma catraca que libera o acesso ap�s a leitura de um c�digo de cart�o
v�lido.
Proposta: Defina um c�digo de acesso (ex: 777). Use um do-while para simular a leitura de
cart�es. O la�o continua at� que o c�digo correto seja digitado.


*/

int main(){


int codigo;

do{
	printf("Digite o codigo de acesso(Codigo: 777): ");
	scanf("%d", &codigo);
	if (codigo != 777){
		printf("O codigo digitado esta incorreto!\n");
	}
	
	
}while(codigo != 777);
printf("Codigo de acesso correto! Acesso liberado! \n");
system("pause");
return 0;


}
