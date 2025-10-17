#include <stdio.h>
#include <stdlib.h>

/*

10. Confirmação de Pedido
Contexto: Um sistema de e-commerce que, após mostrar o resumo do pedido, pede uma
confirmação final do usuário.
Proposta: Exiba um resumo de um pedido fictício. Pergunte ao usuário se ele confirma a
compra ('S' para Sim, 'N' para Não). Use um do-while para repetir a pergunta até que uma
resposta válida seja dada.


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
