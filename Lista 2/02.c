#include <stdio.h>

int main(){
	float numero;
	
	printf("Digite um valor:");
	scanf("%f", &numero);
	
	if (numero >= 0)
	printf("Positivo");
	
	else
	printf("Negativo");
	
	return 0;
}
