#include <stdio.h>
#include <stdlib.h>




/*


 Escreva um programa que leia um valor de despesa de restaurante, o
valor da gorjeta (em porcentagem) e o número de pessoas para dividir a
conta. Imprima o valor que cada um deve pagar. Assuma que a conta será
dividida igualmente.

*/




int main() {
	
	
	float conta, contaf, gorjeta, c_gorjeta;
	int pax;
	
	printf("Digite o valor da conta em R$: \n");
 				   scanf("%f", &conta);
    printf("Digite a porcentagem de desconto: \n");
    			   scanf("%f", &gorjeta);
    printf("Digite a quantidade de pessoas na mesa: \n");
  	 			   scanf("%d", &pax);
                   
    contaf = ((gorjeta / 100)+1);
    contaf = (contaf  * conta )/ pax;
    
    //printf("conta: %f", contaf); //texte variavel conta
    
    printf("O total eh de: R$ %.2f, com %.0f porc. de gorjeta, dividida para %d pessoas eh de : %.2f \n", conta,gorjeta, pax, contaf);
    

	system("pause");
	return 0;
	
	
}
