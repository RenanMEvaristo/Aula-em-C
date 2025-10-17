#include <stdio.h>
#include <stdlib.h>

/*

 Calcule e apresente a área de um círculo: Área = 3,1416 * R² (R²
significa R * R)


*/


int main(){
	
	
	float pi, raio, area;
	
	printf("Digite o raio do circulo: ");
	  scanf("%f", &raio);
	  
    pi = 3.1416;
    area = pi * (raio*raio);
    
    printf("A Area do circulo eh: %.2f", area);
    
    system("pause");
    return 0;
	
	
	
}

