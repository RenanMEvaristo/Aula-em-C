#include <stdio.h>
#include <stdlib.h>

/*

18. Crie um programa que leia o peso (em kg) e a altura (em metros) de uma pessoa. Calcule o IMC e
exiba a classificação correspondente:
Abaixo de 18.5: Abaixo do peso
Entre 18.5 e 24.9: Peso normal
Entre 25.0 e 29.9: Sobrepeso
30.0 ou mais: Obesidade

*/

int main(){
	
	int imc, peso, altura;
	
	
	
	printf("18. Crie um programa que leia o peso (em kg) e a altura (em metros) de uma pessoa. Calcule o IMC e exiba a classificação correspondente.\n");
printf("\n");


printf("Digite o seu peso: ");
scanf("%d", &peso);
printf("Digite sua altura em Metros: ");
scanf("%d", &altura);

imc = peso / (altura*altura);

if (imc >= 18.5 && imc <= 24.9){
	printf("Peso normal.");
	}else{
		if (imc >= 25 && imc <= 29.9){
			printf("Sobrepeso.");
		}else{
			if (imc > 30){
				printf("Sobrepeso.");
			}
		}
	}
	
	
	
}
