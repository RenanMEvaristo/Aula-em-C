#include <stdio.h>
#include <stdlib.h>

/*

5. Simulação de Investimento
Contexto: Um simulador financeiro precisa projetar o crescimento de um investimento ao
longo dos meses.
Proposta: Solicite um valor inicial, uma taxa de juros mensal (ex: 0.5 para 0.5%) e o número
de meses. Use um laço for para calcular e exibir o montante ao final de cada mês.


*/

int main(){
	
	
	float calculo, vInicial, tJuros, mes, resto;
	
	
	printf("Digite o valor inicial de investimento: ");
	scanf("%f", &vInicial);
	printf("Digite a quantidade de meses desejados: ");
	scanf("%f", &mes);
	printf("Digite a taxa de juros desejada em decimal(Ex: 0.1 para 10%%): ");
	scanf("%f", &tJuros);
	
	calculo = vInicial;
	
	for (int x = 1; x <= mes; x++){
		
		 
		calculo = calculo + ( calculo * (tJuros / 100));
		printf("O valor do %d mes eh de:R$ %.2f \n", x, calculo);
	}
	
	system("pause");
	return 0;
	
	
	
	
	
}
