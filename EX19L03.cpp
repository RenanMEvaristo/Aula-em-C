#include <stdio.h>
#include <stdlib.h>

/*

19. Crie um programa que exiba um menu de especialidades médicas (1-Clínico Geral, 2-Cardiologia,
3-Dermatologia, 4-Ortopedia). O programa deve ler a opção do usuário e usar switch case para
confirmar o agendamento para a especialidade escolhida.

*/

int main(){
	
	int opcao;
	
	
	printf("Criar um programa com especialidades medicas usando switch case.\n");
	printf("\n");
	
	
	printf("Digite a especialidade requerida: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			printf("Agendamento realizado para o clinico geral.\n");
			break;
		
		case 2:
			printf("Agendamento realizado para Cardiologia. \n");
			break;
		
		case 3:
			printf("Agendamento realizado para Dermatologia. \n");
			break;
		
		case 4:
			printf("Agendamento realizado para Ortopedia. \n");
		break;
		default:
			printf("Operador invalido! \n");
		
		
	}
	
	
	system("pause");
	return 0;
	
}
