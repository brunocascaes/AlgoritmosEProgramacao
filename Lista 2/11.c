#include <stdio.h>

int main () { 
	float valor1, valor2, operacao, resultado;

	printf("Digite dois valores: ");
	scanf("%f %f", &valor1, &valor2);
	printf("Escolha a operação [1. Adição 2. Subtração 3. Divisão 4. Multiplicação]: ");
	scanf("%f", &operacao);

	if (operacao==1) {
		resultado = valor1 + valor2;
	} else if (operacao==2) {
		resultado = valor1 - valor2;
	} else if (operacao==3) {
		resultado = valor1 / valor2;
	} else if (operacao==4) {
		resultado = valor1 * valor2;
	}

	printf("O resultado da operação escolhida eh: %f", resultado);
	return 0;
}

