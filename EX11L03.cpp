#include <stdio.h>
#include <stdlib.h>

/*

11. Considerando que a nota m�nima de aprova��o � 6,0 e a frequ�ncia m�nima � 75%, solicitar os
dados e informar se o aluno est� APROVADO ou REPROVADO.

*/

int main(){
	
	int nota, freq;
	
	
	
	printf("Digite a nota do aluno: ");
	scanf("%d", &nota);
	printf("Digite a frequencia do aluno(sendo 80 aulas): ");
	scanf("%d", &freq);
	
	if (freq >= 60 && nota >= 6){
		printf("O aluno foi aprovado!");
	}else{
		printf("O aluno foi reprovado!");		
	}
	
	system("pause");
	return 0;
	
	
}
