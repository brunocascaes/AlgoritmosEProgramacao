#include <stdio.h>

int main(){
	float ano_nascimento;
	
	printf("Digite o ano do nascimento: ");
	scanf("%f", &ano_nascimento);
	
	if (ano_nascimento > 2002)
	printf("Nao poder� votar esse ano");
	
	else
	printf("Poder� votar esse ano");
	
	return 0;
}
