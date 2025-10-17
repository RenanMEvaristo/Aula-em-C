#include <stdio.h>
#include <stdlib.h>

/*


12. Solicitar o mês (em número) e apresentar seu nome por extenso

*/


int main(){
	
	int mes;
	
	printf("12. Solicitar o mês (em número) e apresentar seu nome por extenso");
	printf("\n");
	
	
	
	printf("Digite o numero de um mes: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
		printf("Janeiro.");
	break;
	
	case 2:
		printf("Fevereiro.");
	break;
	
	case 3:
		printf("Março.");
	break;
	
	case 4:
		printf("Abril.");
	break;
	
	case 5:
		printf("Maio.");
	break;
	
	case 6:
		printf("Junho.");
	break;
	
	case 7:
		printf("Julho.");
	break;
	
	case 8:
		printf("Agosto.");
	break;
	
	case 9:
		printf("Setembro.");
	break;
	
	case 10:
		printf("Outubro.");
	break;
	
	case 11:
		printf("Novembro.");
	break;
	
	case 12:
		printf("Dezembro.");
	break;
	default:
		printf("Mes invalido!");


	}
	
	
	
	
	
}
