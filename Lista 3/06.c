#include <stdio.h>

int main()
{
	float celsius, fahrenheit, nova_temperatura;
	
	do {
		printf("Digite os graus em Celsius:");
		scanf("%f", &celsius);
		
		fahrenheit = ((celsius*9)/5) + 32;
		printf ("O valor correspondente em graus Fahrenheit eh: %f\n", fahrenheit);
	
		printf("Nova temperatura (1. sim 2. não)?");
		scanf("%f", &nova_temperatura); //2 encerra
	} while(nova_temperatura == 1);
	
	return 0;
}
