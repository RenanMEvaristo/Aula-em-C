#include <stdlib.h>
#include <stdio.h>

/*
Exercício 1.1: Gerador de Tabuadas Completas
Card de Solicitação (do Sistema Educacional): "Precisamos de uma ferramenta que gere todas
as tabuadas de multiplicação, do 1 ao 10, para criar material de estudo para os alunos."
Proposta: Crie um programa que use um laço for externo para controlar o número da tabuada
(de 1 a 10). Dentro dele, use outro laço for para calcular e exibir a multiplicação desse número
de 1 a 10.
Resultado Esperado:
--- Tabuada do 1 ---
1 x 1 = 1
...
1 x 10 = 10
--- Tabuada do 2 ---
2 x 1 = 2
...



*/


int main(){
	
	
 int nTabuada, conta, x;
 
 do{
	  printf("Digite o numero da tabuada desejado: ");
	 scanf("%d", &nTabuada);
	 if(nTabuada < 0 || nTabuada > 10){
	 printf("Numero digitado incorreto!\n");
	 }
	 }while(nTabuada <0 || nTabuada > 10);
 
 for(x = 1; x <= 10; x++){
 	conta = x * nTabuada;
 	printf("%d x %d = %d\n", x, nTabuada, conta);
 }
 
}

	
	

