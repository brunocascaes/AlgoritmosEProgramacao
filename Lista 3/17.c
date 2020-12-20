#include<stdio.h>

int main() {
	float suprimento, dias = 0;
	
	printf("Digite a quantidade inicial de suprimento: ");
	scanf("%f", &suprimento);
		
	while(suprimento > 1) {
		suprimento = suprimento/2;
		dias += 1;
	};

	printf("Dias: %f ", dias);
	
	return 0;
}
