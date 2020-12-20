#include <stdio.h>

int main() {
	int n=1;
	
	while(n != 0) {
		printf("Digite um número:");
		scanf("%d", &n);
		
		if (n > 0)
			printf("POSITIVO\n");
		if (n < 0)
			printf("NEGATIVO\n");
	}
	
	return 0;
}
