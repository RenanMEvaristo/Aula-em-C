#include <stdio.h>
#include <stdlib.h>

/*

 Card de Solicita��o (do Sistema de RH): "Precisamos de cadastrar 2 novos funcion�rios. Para
 cada um, o sistema deve solicitar o nome e o c�digo do departamento (1-Tecnologia, 2-RH, 3
Financeiro). O sistema n�o deve permitir continuar o cadastro enquanto um c�digo de
 departamento inv�lido for inserido."
 Proposta: Use um la�o for para controlar o cadastro dos 2 funcion�rios. Dentro dele, use um
 la�o do-while para pedir o c�digo do departamento, repetindo a pergunta at� que o usu�rio
 digite um valor v�lido (1, 2 ou 3)


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

