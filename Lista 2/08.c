#include <stdio.h>

int main(){
	int numero, resto;
	
	printf("Digite um numero:");
	scanf("%d", &numero);
	
	resto = numero%2;
	if(resto == 0) {
		printf("PAR");
	}
	else {
		printf("IMPAR");	
	}
		
	return 0;
}
