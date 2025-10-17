#include <stdio.h>
#include <stdlib.h>


/*

25. Solicite 5 números e calcule a média ponderada, com pesos: 2, 4, 2, 5
e 3


*/

int main(){


	int m1, m2, m3, m4, m5;
	int p2, p3, p4, p5;
	int media;
	
	printf("Digite a primeira media: ");
		scanf("%i", &m1);
	printf("Digite a segunda media: ");
		scanf("%i", &m2);
	printf("Digite a terceira media: ");
		scanf("%i", &m3);
	printf("Digite a quarta media: ");
		scanf("%i", &m4);
	printf("Digite a quinta media: ");
		scanf("%i", &m5);
		
	p2 = 2;
	p3 = 3;
	p4 = 4;
	p5 = 5;
	//printf("%i, %i, %i, %i, %i" ,p2, p4, p2, p3, p5);	// teste
	
	
	
	media = (m1 * p2) + (m2 * p4) + (m3 * p2) + (m4 * p5) + (m5 * p3);
	//printf("%i", media); //
	media = media / (p2+p3+p4+p5);
	
	
	printf("A media geral eh: %i\n", media);
	
	system("pause");
	return 0;
	
	
}	
