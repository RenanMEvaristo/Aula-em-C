#include <stdio.h>
#include <stdlib.h>

/*
4. Solicitar o n�vel de energia do personagem (0 a 100). Se for menor que 30, informar �Energia
cr�tica�; se for entre 30 e 70, informar �Energia est�vel�; se for acima de 70, informar �Energia
m�xima�


*/

int main(){


int energia;


printf("Digite o nivel de energia do personagem: ");
scanf("%d", &energia);
						if (energia <=30){
						printf("Energia cr�tica!");
						}else{
									if (energia < 70){
									printf("Energia estavel!");
									}else{
									printf("Energia maxima!");
			      											          }
									}
				}
