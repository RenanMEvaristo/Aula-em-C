#include <stdio.h>
#include <stdlib.h>


/*

15. Solicitar o nome, idade e sexo (F/M) de várias pessoas. Após cada entrada, perguntar se deseja
continuar. Quando encerrar, apresentar a média de idade das mulheres.

*/


int main(){
	

	int idade, media, cont;
	char sexo, continua, nome;	
	
	
	
	printf("15. Solicitar o nome, idade e sexo (F/M) de várias pessoas. Após cada entrada, perguntar se deseja continuar.\nQuando encerrar, apresentar a média de idade das mulheres.\n");
	printf("\n");
//-----------------------------------------	
	cont = 0;
	
	do{
	
		printf("Digite seu nome: ");
		scanf("%s", &nome);
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		printf("Digite o seu sexo(F/M): ");
		scanf(" %c", &sexo);
	
			//contador de mulheres	
				if (sexo == 'F'){
				
				media = media + idade;
				cont = cont +1;
				}
			//--------------------------	
				printf("Deseja continuar?");
				scanf(" %c", &continua);
	}while (continua == 'S');



if (cont > 0){


media = media / cont;
printf("A media da idade dos cadastrados eh: %d\n", media);


}else{
	printf("Nao foram cadastradas mulheres!\n");
}


system("pause");
return 0;

}
	
	

