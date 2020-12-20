#include <stdio.h>

int main(){
	float salario_mensal, percentual_reajuste, acrescimo, novo_salario;
	
	printf("Digite o salario mensal e o percentual de reajuste: ");
	scanf("%f %f", &salario_mensal, &percentual_reajuste);
	
	acrescimo = (salario_mensal*percentual_reajuste)/100;
	novo_salario = acrescimo + salario_mensal;
	
	printf("O valor do novo salario eh: %f", novo_salario);
	
	return 0;
}
