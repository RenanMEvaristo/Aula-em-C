#include <stdio.h>
#include <stdlib.h>

/*
16. Leia 3 notas e calcule a média aritmética.
*/

int main(){
	
	int nota1, nota2, nota3, media;
	
	printf("Digite a primeira nota: ");
		scanf("%i", &nota1);
	printf("Digite a segunda nota: ");
		scanf("%i", &nota2);
	printf("Digite a terceira nota: ");
		scanf("%i", &nota3);
		
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("A media eh: %i \n", media);
	
	system("pause");
	return 0;
	
}
