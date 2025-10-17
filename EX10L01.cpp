#include <stdio.h>
#include <stdlib.h>


/*

--- Cadastro de Novo Produto ---
Digite o nome do produto (uma palavra):
Teclado
Digite a quantidade em estoque:
30
Digite o preço unitário: R$
150.99
--- Resumo do Produto Cadastrado ---
Produto: Teclado
Estoque: 30 unidades
Preço: R$ 150.99

*/


int main(){
	

	char nome[20];
	float preco;
	int quantidade;
	
	printf("Digite o nome do produto: \n");
	scanf("%s", &nome);
	
	printf("Digite a quantidade em estoque: \n");
	scanf("%d", &quantidade);
	
	printf("Digite o preço do produto: \n");
	scanf("%f", &preco);
	
	printf("--- Resumo do Produto Cadastrado --- \n");
	printf("Produto: %s \n", nome);
	printf("Estoque: %d \n", quantidade);
	printf("Preco: %.2f \n", preco);
	
	return 0;

	
}

