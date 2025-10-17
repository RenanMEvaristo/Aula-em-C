#include <stdlib.h>
#include <stdio.h>

/*
11. Caixa Registradora
Contexto: Simular um caixa de supermercado que soma os preços dos produtos.
Proposta: Crie um programa que leia o preço de vários produtos. O laço deve continuar
enquanto o preço digitado for maior que zero. Se o usuário digitar 0, o laço termina e o
programa exibe o total da compra.


*/


int main(){
	
	
	float resultado, preco;
	
	
	while(preco > 0){
	printf("Digite o valor do item(quando quiser sair, digite 0): ");
	scanf("%f", &preco);
	resultado = resultado + preco;
		
	}
	
	printf("A soma dos valores eh: %.2f \n", resultado);

system("pause");
return 0;

}
