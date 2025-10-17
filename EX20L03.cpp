#include <stdio.h>
#include <stdlib.h>

/*

20. Um hemocentro precisa de um programa rápido para a triagem inicial de doadores. As regras
básicas são: ter entre 18 e 69 anos E pesar 50kg ou mais. Crie um programa que leia a idade e o
peso de um potencial doador. Use uma estrutura if com o operador lógico && (E) para verificar
se ambas as condições são atendidas e informe se a pessoa está apta para a próxima fase da
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
