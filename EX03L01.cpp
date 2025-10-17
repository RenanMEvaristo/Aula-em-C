#include <stdio.h>
#include <stdlib.h>





/*Digite a primeira nota:
8.0
Digite a segunda nota:
9.5
A media entre 8.00 e 9.50 e: 8.75
*/

int main(){
	
	
	int nota1, nota2, media;
	
	printf("Digite a primeira media: \n");
	scanf("%d", &nota1);
	printf("Digite a segunda media: \n");
	scanf("%d", &nota2);
	media = (nota1+nota2) / 2;

	printf("A sua media eh: %d \n", media);
	system("pause");
	return 0;
	
	
	
	
	
}
