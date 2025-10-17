#include <stdio.h>
#include <stdlib.h>

/*

--- Controle de Estoque ---
Digite a quantidade atual do produto em estoque:
50
Digite a quantidade vendida:
12
Estoque atualizado: restam 38 unidades do produto.


*/



int main(){
	
	
	
	int estoque, vendido, e_att;
	
	printf("Digite a quantidade atual do produto em estoque: \n")/
	scanf("%d", &estoque);
	
	printf("Digite a quantidade vendida: \n");
	scanf("%d", &vendido);
	
	e_att = estoque - vendido;
	
	printf("Estoque atualizado: restam %d unidades do produto", e_att);
	
	
	return 0;
	
	
	
	
	
	
	
	
}
