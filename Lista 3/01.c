#include <stdio.h>

int main() {
	int n;
	
	do {	
		printf("Digite um número: ");
		scanf("%d", &n);
		
		if (n > 0)
			printf("POSITIVO\n");
		if (n < 0)
			printf("NEGATIVO\n");
	} while(n != 0);
	
	return 0;
}
