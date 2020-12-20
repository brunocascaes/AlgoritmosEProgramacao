#include <stdio.h>

int main (){
	float valor1, valor2, valor3;

	printf("Digite tres valores:");
	scanf("%f %f %f", &valor1, &valor2, &valor3);
	
	if (valor1 > valor2 && valor1 > valor3)
		printf("%f", valor1);
	
	if (valor2 > valor1 && valor2 > valor3)
		printf("%f", valor2);
		
	if (valor3 > valor2 && valor3 > valor1)
		printf("%f", valor3);
	
	return 0;
}
