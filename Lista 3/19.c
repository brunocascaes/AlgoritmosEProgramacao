#include<stdio.h>
#include<math.h>

int main() {
	float termos, soma = 0;
	int i;
	
	printf("Digite o numero de termos: ");
	scanf("%f", &termos);
	
	for (i=1; i<=termos; i++) {
		soma += 1/(pow(2, i));
	}
	
	printf("%f", soma);
	
	return 0;
}
