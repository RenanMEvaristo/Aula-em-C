#include <stdio.h>
#include <stdlib.h>


/*

. Elabore um algoritmo que receba, por meio do teclado, dois valores,
um para a variável “a” e um para a variável “b”. Em seguida, faça os
passos que julgar necessário para que ao final, a variável “a” possua o
valor que inicialmente estava em “b” e a variável “b” possua o valor que
inicialmente estava em “a”. Traduza seu algoritmo para a linguagem C e
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
    
    printf("Os numero invertidos são: %d e %d", a, b);
    system("pause");
    return 0;
	
	
	
}
