#include <stdlib.h>
#include <stdio.h>

/*
Exerc�cio 1.1: Gerador de Tabuadas Completas
Card de Solicita��o (do Sistema Educacional): "Precisamos de uma ferramenta que gere todas
as tabuadas de multiplica��o, do 1 ao 10, para criar material de estudo para os alunos."
Proposta: Crie um programa que use um la�o for externo para controlar o n�mero da tabuada
(de 1 a 10). Dentro dele, use outro la�o for para calcular e exibir a multiplica��o desse n�mero
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

	
	

