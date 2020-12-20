#include <stdio.h>

int main() {
	int valor;
	
	do {	
		printf("Digite um valor inteiro:");
		scanf("%d", &valor);
	
		if(valor > 0) {
			if (valor%2 == 0)
				printf("PAR\n");
			else
				printf("IMPAR\n");
		}	
	} while(valor > 0);
	
	return 0;
}
