#include <stdio.h>
#include <stdlib.h>


/*

. Elabore um algoritmo que receba, por meio do teclado, dois valores,
um para a vari�vel �a� e um para a vari�vel �b�. Em seguida, fa�a os
passos que julgar necess�rio para que ao final, a vari�vel �a� possua o
valor que inicialmente estava em �b� e a vari�vel �b� possua o valor que
inicialmente estava em �a�. Traduza seu algoritmo para a linguagem C e
exiba os valores na tela.
 */
 

int main(){
	
	int a, b, c;
	
	printf("Digite o primeiro numero inteiro");
       scanf("%d", &a);
    printf("Digite o segundo numero inteiro");
	   scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    
    printf("Os numero invertidos s�o: %d e %d", a, b);
    system("pause");
    return 0;
	
	
	
}
