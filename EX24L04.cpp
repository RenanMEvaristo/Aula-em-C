#include <stdio.h>
#include <stdlib.h>

/*

 Card de Solicitação (do Sistema de RH): "Precisamos de cadastrar 2 novos funcionários. Para
 cada um, o sistema deve solicitar o nome e o código do departamento (1-Tecnologia, 2-RH, 3
Financeiro). O sistema não deve permitir continuar o cadastro enquanto um código de
 departamento inválido for inserido."
 Proposta: Use um laço for para controlar o cadastro dos 2 funcionários. Dentro dele, use um
 laço do-while para pedir o código do departamento, repetindo a pergunta até que o usuário
 digite um valor válido (1, 2 ou 3)


*/

int main(){
int x, codigo, nFuncionario;
char nome[50];

nFuncionario = 2;

for(x=1; x <= nFuncionario; x++){
			do{
			printf("Digite o codigo do departamento\n");
			printf("1 - Tecnologia\n");
			printf("2 - RH\n");
			printf("3 - Financeiro\n");
			scanf("%d", &codigo);
			if (codigo !=1 && codigo != 2 && codigo != 3){
				printf("Codigo incorreto!\n");
			}
			
			}while(codigo != 1 && codigo != 2 && codigo != 3);
printf("Digite o nome do funcionario: ");
scanf("%s", &nome);
printf("Funcionario %s cadastrado no departamento %d.\n", nome, codigo);

}

system("pause");
return 0;


}

