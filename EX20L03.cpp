#include <stdio.h>
#include <stdlib.h>

/*

20. Um hemocentro precisa de um programa r�pido para a triagem inicial de doadores. As regras
b�sicas s�o: ter entre 18 e 69 anos E pesar 50kg ou mais. Crie um programa que leia a idade e o
peso de um potencial doador. Use uma estrutura if com o operador l�gico && (E) para verificar
se ambas as condi��es s�o atendidas e informe se a pessoa est� apta para a pr�xima fase da
triagem.

*/



int main(){
	
	int idade;
	float peso;
	
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu peso em KG: ");
	scanf("%f", &peso);
	
	if (idade >= 18 && peso >= 50){
		printf("Voce esta apto a doar sangue!\n");
		
	}else{
		printf("Voce nao esta apto a doar sangue!\n");
	}
	
	system("pause");
	return 0;
	
	
	
}
