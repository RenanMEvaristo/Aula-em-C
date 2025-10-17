#include <stdio.h>
#include <stdlib.h>

/*
4. Solicitar o nível de energia do personagem (0 a 100). Se for menor que 30, informar “Energia
crítica”; se for entre 30 e 70, informar “Energia estável”; se for acima de 70, informar “Energia
máxima”


*/

int main(){


int energia;


printf("Digite o nivel de energia do personagem: ");
scanf("%d", &energia);
						if (energia <=30){
						printf("Energia crítica!");
						}else{
									if (energia < 70){
									printf("Energia estavel!");
									}else{
									printf("Energia maxima!");
			      											          }
									}
				}
