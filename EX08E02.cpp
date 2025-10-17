#include <stdio.h>
#include <stdlib.h>





/*

 Calcule e apresente a área de um triângulo: Área = (base * altura) / 2

*/

int main(){
	
	
	float base, altura, area;
	
	printf("Digite a base do triangulo: ");
	  scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
      scanf("%f", &altura);
    
	area = (base * altura) / 2;
	//printf("%f, %f", base, altura); // teste retorno base altura
	printf("A Area do triangulo eh: %.2f", area);
	
	system("pause");
	return 0;
	  
    
	
	
	
	
	
}
