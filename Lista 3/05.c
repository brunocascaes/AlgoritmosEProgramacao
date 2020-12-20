#include <stdio.h>

int main() {
	int senha;
	
	do {
		printf("Digite a senha:");
		scanf("%d", &senha);
		
		if (senha != 2005)
			printf("SENHA INVALIDA\n");
		else
			printf("ACESSO PERMITIDO\n");
	} while(senha != 2005);

	return 0;	
}
