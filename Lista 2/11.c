#include <stdio.h>

int main () { 
	float valor1, valor2, operacao, resultado;

	printf("Digite dois valores: ");
	scanf("%f %f", &valor1, &valor2);
	printf("Escolha a opera��o [1. Adi��o 2. Subtra��o 3. Divis�o 4. Multiplica��o]: ");
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

	printf("O resultado da opera��o escolhida eh: %f", resultado);
	return 0;
}

