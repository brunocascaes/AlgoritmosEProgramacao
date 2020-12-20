#include <stdio.h>

int main() {
	int valor1, valor2;
	
	do {
		printf("Digite 2 valores:");
		scanf("%d %d", &valor1, &valor2);
	
		if (valor1 != valor2){
			if (valor1 > valor2)
				printf("DECRESCENTE\n");
			else
				printf("CRESCENTE\n");
		}
	} while(valor1 != valor2);
	
	return 0;
}
