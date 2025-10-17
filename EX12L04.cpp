#include <stdlib.h>
#include <stdio.h>


/*


2. Validação de Idade
Contexto: Um sistema de cadastro precisa garantir que a idade inserida seja válida (ex: entre 0
e 120 anos).
Proposta: Solicite a idade do usuário. Use um laço while para continuar pedindo a idade
enquanto o valor digitado for inválido.


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
