#include <stdlib.h>
#include <stdio.h>

/*
11. Caixa Registradora
Contexto: Simular um caixa de supermercado que soma os pre�os dos produtos.
Proposta: Crie um programa que leia o pre�o de v�rios produtos. O la�o deve continuar
enquanto o pre�o digitado for maior que zero. Se o usu�rio digitar 0, o la�o termina e o
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
