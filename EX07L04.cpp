#include <stdlib.h>
#include <stdio.h>

/*


7. Potenciação
Contexto: Desenvolver uma função de potenciação sem usar a biblioteca math.h.
Proposta: Solicite uma base e um expoente (inteiros positivos). Calcule a potência usando um
laço for.


*/


int main(){
	
	int calculo, base, expoente, resultado;
	
	
	printf("Digite um numero como base: ");
	scanf("%d", &base);
	printf("Digite um numero como expoente: ");
	scanf("%d", &expoente);
	
for (int x = 1; x <= expoente; x++){
	calculo = base * base;
	resultado = calculo * base;
	
}

printf("%d", resultado);


	
	
	
}
