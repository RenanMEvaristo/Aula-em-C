#include <stdlib.h>
#include <stdio.h>


/*


2. Valida��o de Idade
Contexto: Um sistema de cadastro precisa garantir que a idade inserida seja v�lida (ex: entre 0
e 120 anos).
Proposta: Solicite a idade do usu�rio. Use um la�o while para continuar pedindo a idade
enquanto o valor digitado for inv�lido.


*/

int main(){
	
	int idade;
	
	
	idade = -1;
	
	while(idade < 0 || idade > 120){
	printf("Digite sua idade(Entre 0 e 120 anos): ");
	scanf("%d", &idade);
	}
	
	system("pause");
	return 0;
}
