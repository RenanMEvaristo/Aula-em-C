#include <stdio.h>
#include <stdlib.h>

/*

Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um
programa que solicite o número de dias trabalhados pelo encanador e
imprima a quantia líquida que deverá ser paga, sabendo que são
descontados 8% para imposto de renda.

*/

int main(){
	
	
	int dia;
	float salario;
	
	printf("Quantos dias o trabalhor compareceu? \n");
	  scanf("%i", &dia);
    salario = (dia * 45)* 0.92;
    printf("O trabalhor tem a receber R$%.2f, ja com 8 por cento de imposto descontado.\n", salario);
    
    system("pause");
    return 0;
	
	
	
	
	
}
