#include <stdio.h>
#include <stdlib.h>

/*
22. Solicite o nome e a idade de 4 pessoas e calcule a média das idades
*/


int main (){
	
	int id1, id2, id3, id4, media;
	char n1, n2, n3, n4;
	
	printf("Digite o nome da primeira pessoa:  ");
		scanf("%s", &n1);
	printf("Digite a idade da primeira pessoa: ");
		scanf("%i", &id1);
	printf("Digite o nome da segunda pessoa: ");
		scanf("%s", &n2);
	printf("Digite a idade da segunda pessoa: ");
		scanf("%i", &id2);
	printf("Digite o nome da terceira pessoa: ");
		scanf("%s", &n3);
	printf("Digite a idade da terceira pessoa: ");
		scanf("%i", &id3);
	printf("Digite o nome da quarta pessoa: ");
		scanf("%s", &n4);
	printf("Digite a idade da quarta pessoa: ");
		scanf("%i", &id4);
		
	media = (id1+id2+id3+id4)/ 4;
	
	printf("A media da idade das 4 pessoas eh: %i\n", media);
	
	system("pause");
	return 0;
	
	
}
