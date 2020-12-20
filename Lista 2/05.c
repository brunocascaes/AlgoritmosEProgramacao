#include <stdio.h>

int main(){
	float valor1, valor2;
	
	printf("Digite dois valores: ");
	scanf("%f %f", &valor1, &valor2);
	
	if (valor1 > valor2)
	printf("%f %f", valor2, valor1);
	
	else
	if (valor2 > valor1)
	printf("%f %f", valor1, valor2);
	
	return 0;
}
