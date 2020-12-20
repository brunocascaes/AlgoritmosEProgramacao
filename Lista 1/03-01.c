#include <stdio.h>

int main() {
	float celsius, fahrenheit;
	
	printf("Digite os graus em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = ((fahrenheit-32)*5)/9;
	
	printf ("O valor correspondente em graus Celsius eh: %f", celsius);
	
	return 0;
}
