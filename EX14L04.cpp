#include <stdio.h>
#include <stdlib.h>

/*


4. Média de Idades (com Flag)
Contexto: Um pesquisador precisa calcular a média de idade de um grupo de pessoas, mas não
sabe quantas pessoas são.
Proposta: Leia a idade de várias pessoas. O laço deve parar quando o usuário digitar uma
idade negativa. Ao final, exiba a média das idades válidas.

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
