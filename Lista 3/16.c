#include<stdio.h>

int main() {
	float valorA, valorN = 0, soma = 0;
	int i;
	
	printf("Digite 1 numero: ");
	scanf("%f", &valorA);
		
	while(valorN <= 0) {
		printf("Digite outro numero: ");
		scanf("%f", &valorN);
	};
	
	for (i=valorA; i<(valorA+valorN); i++) {
		soma += i;
	}

	printf("Soma entre %f e %f eh %f ", valorA, valorA+valorN, soma);
	
	return 0;
}
