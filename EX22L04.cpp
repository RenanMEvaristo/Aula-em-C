#include <stdio.h>
#include <stdlib.h>

/*
Exercício 1.2: Média de Notas de Várias Turmas
Card de Solicitação (do Sistema Acadêmico): "Desenvolva um módulo que calcule a média de
notas para várias turmas. O sistema deve primeiro perguntar quantas turmas serão processadas
e, para cada turma, quantos alunos ela tem."
Proposta: Use um laço for externo para iterar sobre o número de turmas. Dentro dele, use um
laço for interno para solicitar a nota de cada aluno daquela turma, calcular a média da turma e
exibi-la.
Resultado Esperado:
--- Módulo de Média de Turmas ---
Quantas turmas deseja processar? 2
--- Turma 1 ---
Quantos alunos nesta turma? 3
Nota do Aluno 1: 7.0
Nota do Aluno 2: 8.0
Nota do Aluno 3: 9.0
Média da Turma 1: 8.00
--- Turma 2 ---
Quantos alunos nesta turma? 2
...


*/


int main(){
	

int x, i, qtdTurma, qtdAlunos;
float media, nota, calc;



printf("Digite a quantidade de turmas a serem processadas!: ");
scanf("%d", &qtdTurma);
for(x = 1; x <= qtdTurma; x++){
	printf("Quantos alunos na %dº turma? ", x);
	scanf("%d", &qtdAlunos);
	media = 0;
	calc = 0;
		for(i = 1; i <= qtdAlunos; i++){
			printf("Digite a nota do %d aluno: ", i);
			scanf("%f", &nota);
			calc = calc + nota;
			media = calc / qtdAlunos;
		}
		printf("---Media da turma %d---- ", x);
		printf("%.2f", media);
}

	system("pause");
	return 0;
	
}
