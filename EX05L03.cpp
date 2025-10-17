#include <stdio.h>
#include <stdlib.h>


/*

5. Solicitar um valor numérico e apresentar a mensagem: “Valor positivo”, “Valor negativo” ou
“Zero”


*/


int main(){
	
	int valor;
	
	
	printf("Digite um valor inteiro positivo ou negativo: ");
	scanf("%d", &valor);
	
	if (valor > 0){
		printf("O valor eh positivo!");
	}else{
		if (valor <0){
			printf("O valor eh negativo!");
			
	}else{
		if (valor == 0){
			printf("O valor digitado eh 0");
		}
	}
	}
	
	
	
}
