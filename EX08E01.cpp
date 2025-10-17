#include <stdio.h>
#include <stdlib.h>

/*

--- Calculadora de Gorjeta ---
Digite o valor total da conta: R$
80.50
Digite a porcentagem da gorjeta (ex: 10):
10
Valor da gorjeta: R$ 8.05
Valor total a pagar: R$ 88.55


*/


int main(){
	
	
	float conta, porcentagem, gorjeta, total;
	
	
	printf("Digite o valor total da conta: ");
	scanf("%f", &conta);
	
	printf("Digite a porcentagem da gorjeta: ");
	scanf("%f", &porcentagem);
	
	gorjeta = conta * (porcentagem / 100);
	total = conta + gorjeta;
		
	
	printf("Valor da gorjeta:R$ %.2f \n", gorjeta);
	printf("Valor total a pagar: %.2f \n", total);
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}
