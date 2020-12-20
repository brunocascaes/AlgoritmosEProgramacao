#include<stdio.h>

int main() {
	int termos, i, soma = 0;
	
	printf("Digite o numero de termos: ");
	scanf("%d", &termos);
	
	for (i=0; i<termos; i++) {
		soma += i*2 + 1;
	}
	
	printf("%d", soma);
	
	return 0;
}
