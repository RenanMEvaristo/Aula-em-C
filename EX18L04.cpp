#include <stdio.h>
#include <stdlib.h>

/*

8. Controle de Acesso por Cartão
Contexto: Simular uma catraca que libera o acesso após a leitura de um código de cartão
válido.
Proposta: Defina um código de acesso (ex: 777). Use um do-while para simular a leitura de
cartões. O laço continua até que o código correto seja digitado.


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
