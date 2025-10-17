#include <stdio.h>
#include <stdlib.h>

/*


Calcule e apresente o perímetro de um círculo: Perímetro = 3,1416 *
D, onde D = 2 * R

*/

  int main(){
		
		
		float r, d, p;
		
		
		printf("Digite o raio do circulo: ");
			scanf("%f", &r);
		
	
		d = 2 * r;
		p = (d * 3.1416);
		
		
		//printf("%f diametro \n", d); / teste diametro
		//printf("%f perimetro \n", p); / teste perimetro
	 
	 	printf("O perimetro do circulo eh: %.2f \n", p);
		
		system("pause");
		return 0;
		
  	
  	
  	
  }
