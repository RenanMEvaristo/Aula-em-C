#include <stdio.h>
#include <stdlib.h>

/*

2. M�dia de Notas da Turma
Contexto: Calcular a m�dia final de uma turma com um n�mero fixo de alunos.
Proposta: Solicite a quantidade de alunos. Use um la�o for para ler a nota de cada um e, ao
final, calcule e exiba a m�dia da turma.

*/



int main(){
	
	
	int  qtdAlunos, x;
	float nota, media;
	
	
	printf("Calculo de media de alunos.\n");
	printf("\n");
	
	
	printf("Digite o numero de alunos na turma: ");
	scanf("%d", &qtdAlunos);
	
	
	for (x=1; x <= qtdAlunos; x++){
		printf("Digite a nota do %d� aluno: ", x);
		scanf("%f", &nota);
		media = media + nota;
		
	}
	
	media = media / qtdAlunos;
	
	printf("A media de nota da turma eh: %.2f", media);
	
	
}



