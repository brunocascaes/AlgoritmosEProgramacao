#include <stdio.h>

int main (){
	float valor1, valor2, valor3, soma;

	printf("Digite tres valores:");
	scanf("%f %f %f", &valor1, &valor2, &valor3);
	
	if (valor1 > valor2 && valor1 > valor3) {
		if (valor2 > valor3) {
			soma = valor1+valor2;
		} else {
			soma = valor1+valor3;
		}
		printf("%f", soma);
	}
	
	if (valor2 > valor1 && valor2 > valor3) {
		if (valor1 > valor3) {
			soma = valor1+valor2;
		} else {
			soma = valor2+valor3;
		}
		printf("%f", soma);
	}
		
	if (valor3 > valor2 && valor3 > valor1) {
		if (valor1 > valor2) {
			soma = valor1+valor3;
		} else {
			soma = valor2+valor3;
		}
		printf("%f", soma);
	}
	
	return 0;
}
