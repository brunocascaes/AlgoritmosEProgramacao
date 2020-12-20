#include<stdio.h>

int main(){
	
	float valor1, valor2, divisao;
	
	printf("Digite 1 numero: ");
	scanf("%f", &valor1);
	
	do {
		printf("Digite outro numero: ");
		scanf("%f", &valor2);
	} while(valor2 == 0);
	
	divisao = valor1/valor2;
	printf("O resultado da divisao eh: %f", divisao);
	
	return 0;
}
