#include <stdio.h>
#include <stdlib.h>

/*

10. Confirma��o de Pedido
Contexto: Um sistema de e-commerce que, ap�s mostrar o resumo do pedido, pede uma
confirma��o final do usu�rio.
Proposta: Exiba um resumo de um pedido fict�cio. Pergunte ao usu�rio se ele confirma a
compra ('S' para Sim, 'N' para N�o). Use um do-while para repetir a pergunta at� que uma
resposta v�lida seja dada.


*/

int main(){


int val;

printf("---Pedido---\n");
printf("3 Temaki de Feijao Tropeiro\n");
printf("**Queijo extra\n");
printf("**Farofa extra\n");


do{
printf("Deseja confirmar o pedido? (1 = Sim/0 = Nao): ");
scanf("%d", &val);
if (val != 0 && val != 1){
	printf("Digito incorreto!");
}
}while(val == 0);

printf("Pedido concluido!\n");

system("pause");
return 0;
}
