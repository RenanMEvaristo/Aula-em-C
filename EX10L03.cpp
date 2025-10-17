#include <stdio.h>
#include <stdlib.h>


/*

10. Solicitar 3 números distintos e apresentar o maior e o menor.

*/

int main(){
	
	int val1, val2, val3, maior, menor;
	
	
	printf("10. Solicitar 3 números distintos e apresentar o maior e o menor. \n");
	printf("\n");
	
	
	
	printf("Digite o primeiro valor inteiro: ");
	scanf("%d", &val1);
	printf("Digite o segundo valor inteiro: ");
	scanf("%d", &val2);
  printf("Digite um terceiro valor inteiro: ");
	scanf("%d", &val3);
	
	maior = 0;
	menor = 0;
	
	if (val1 > val2 && val1 > val3){
		maior = val1;
	}	else{
		if (val2 > val1 && val2 > val3){
			maior = val2;
		}else{
			maior = val3;
		}
		
	}

	if (val1 < val2 && val1 < val3){
		menor = val1;
	}	else{
		if (val2 > val1 && val2 > val3){
			menor = val2;
		}else{
			menor = val3;
		}
		
	}	
	
	printf("O maior numero eh: %d, e o menor numero eh: %d. \n", maior, menor);
	
	system("pause");
	return 0;
	
}
