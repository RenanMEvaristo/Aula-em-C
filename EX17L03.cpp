#include <stdio.h>
#include <stdlib.h>

/*

17. Crie um programa que leia a m�dia final de um aluno. As regras s�o:
Se a m�dia for maior ou igual a 7.0, o aluno est� "Aprovado".
Se a m�dia for entre 4.0 e 6.9, o aluno est� em "Recupera��o".
Se a m�dia for menor que 4.0, o aluno est� "Reprovado".

*/


int main(){
	
	
	int media;
	
	printf("Digite a media do aluno: ");
	scanf("%d", &media);
	
	
	if (media < 4){
		printf("Reprovado.");
		
	}else{
		if (media < 7){
			printf("Recuperacao.");
		}else{
			if (media > 7){
				printf("Aprovado.");
			}
		}
	}
	
	
	
}
