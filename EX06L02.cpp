#include <stdio.h>
#include <stdlib.h>

/*

Faça um programa para ler do teclado uma quantidade de segundos e
imprimir na tela a conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12



*/


int main(){
	
	
	int t_segundos;
	int hora, minuto, segundo;
	
	printf("Digite a quantidade de segundos: ");
	  scanf("%d", &t_segundos);
 
    hora = t_segundos / 3600; 			//1 hora = 3600 segundos
    minuto = (t_segundos % 3600) / 60;  //% puxa o resto / resto divido por 60
    segundo = t_segundos % 60;			//segundos puxa o resto do total de segundos
    
    printf("%d:%d:%.2d, horas, minutos, segundos \n", hora, minuto, segundo);
    
	
	system("pause");
    
    return 0;
	
	
	
}
