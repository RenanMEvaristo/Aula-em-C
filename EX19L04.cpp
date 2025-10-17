#include <stdio.h>
#include <stdlib.h>


/*


9. Registro de Temperatura
Contexto: Um sistema de monitoramento precisa registrar temperaturas, mas deve validar se
elas estão dentro de um intervalo razoável (ex: -30 a 50 graus Celsius).
Proposta: Solicite a temperatura. Use um do-while para garantir que a temperatura seja
solicitada novamente até que um valor válido seja inserido.


*/



int main(){
	
	
	int temperatura;
	
	do{
	
	printf("Registre a temperatura atual: ");
	scanf("%d", &temperatura);
	if(temperatura <= -30 || temperatura > 50){
		printf("Temperatura digitada invalida!\n");
	}
	
	}while(temperatura <= -30 || temperatura > 50);
	
	printf("fim");
	
	
	system("pause");
	return 0;
	
	
	
	
	
}
