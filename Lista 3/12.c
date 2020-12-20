#include<stdio.h>

int main() {
	
	float valor1, valor2, divisao, novo_calculo;
	
	do {
		printf("Digite 1 numero: ");
		scanf("%f", &valor1);
		
		valor2 = 0;
		while(valor2 == 0) {
			printf("Digite outro numero: ");
			scanf("%f", &valor2);
		};
		
		divisao = valor1/valor2;
		printf("O resultado da divisao eh: %f\n", divisao);
		
		printf("Novo calculo (1. sim 2.não): ");
		scanf("%f", &novo_calculo);
	} while(novo_calculo == 1);
	
	return 0;
}
