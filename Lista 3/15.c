#include <stdio.h>

int main() {
	int i, valor;
	int contador = 1, soma = 0;

	printf("Digite um valor positivo: ");
	scanf("%d", &valor);
	
	do {
		soma += contador;
		if (soma <= valor) {
			contador += 1;	
		}
	} while (soma < valor);
	
	printf("Devem ser somados %d números", contador-1);
	
	return 0;
}
