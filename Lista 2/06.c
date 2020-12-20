#include <stdio.h>

int main(){
	float senha;
	
	printf("Digite a senha: ");
	scanf("%f", &senha);
	
	if (senha == 1234) {
		printf("ACESSO PERMITIDO");
	}
	
	if (senha != 1234) {
		printf("ACESSO NEGADO"); 
	}
	
	return 0;
}
