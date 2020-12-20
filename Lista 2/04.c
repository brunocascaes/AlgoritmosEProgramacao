#include <stdio.h>

int main(){
	float ano_nascimento;
	
	printf("Digite o ano do nascimento: ");
	scanf("%f", &ano_nascimento);
	
	if (ano_nascimento > 2002)
	printf("Nao poderá votar esse ano");
	
	else
	printf("Poderá votar esse ano");
	
	return 0;
}
