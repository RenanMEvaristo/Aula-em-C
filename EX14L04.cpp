#include <stdio.h>
#include <stdlib.h>

/*


4. M�dia de Idades (com Flag)
Contexto: Um pesquisador precisa calcular a m�dia de idade de um grupo de pessoas, mas n�o
sabe quantas pessoas s�o.
Proposta: Leia a idade de v�rias pessoas. O la�o deve parar quando o usu�rio digitar uma
idade negativa. Ao final, exiba a m�dia das idades v�lidas.

*/


int main(){
	
	
	int calc, cont, idade, media;
	
	printf("Digite a idade da pessoa: ");
	scanf("%d", &idade);
	if (idade > 0){
		cont = 1;
		calc = idade;
	}	


	while(idade >= 0){
		
	printf("Digite a idade da pessoa: ");
	scanf("%d", &idade);
	if (idade >= 0){
	
	calc = calc + idade;
	cont = cont + 1;		
	}
	}
	media = calc / cont;
	printf("A media de idade eh: %d\n", media);
	
	system("pause");
	return 0;
	
}
