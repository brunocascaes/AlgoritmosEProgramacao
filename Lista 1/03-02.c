#include <stdio.h>

int main() {
	float celsius ,fahrenheit;
	
	printf("Digite os graus em Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = ((celsius*9)/5) + 32;
	
	printf ("O valor correspondente em graus Fahrenheit eh: %f", fahrenheit);
	
	return 0;
	
}

