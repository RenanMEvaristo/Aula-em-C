#include <stdio.h>
#include <stdlib.h>

/*

17. Crie um programa que leia a média final de um aluno. As regras são:
Se a média for maior ou igual a 7.0, o aluno está "Aprovado".
Se a média for entre 4.0 e 6.9, o aluno está em "Recuperação".
Se a média for menor que 4.0, o aluno está "Reprovado".

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
