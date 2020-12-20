#include <stdio.h>
#define PRECO_COMBUSTIVEL 4.10

int main() {
	float marcacao_odometro_inicio, marcacao_odometro_final, litros_gasto, valor_recebido;
	float media_consumo, lucro;
	
	printf("Digite a marcacao do odometro no inicio e no final do dia (em km): ");
	scanf("%f %f", &marcacao_odometro_inicio, &marcacao_odometro_final);
	printf("Digite o numero de litros gasto e o valor total recebido dos passageiros:");
	scanf("%f %f", &litros_gasto, &valor_recebido);
	
	media_consumo = (marcacao_odometro_final-marcacao_odometro_inicio)/litros_gasto;
	lucro = valor_recebido - (PRECO_COMBUSTIVEL * litros_gasto);
	
	printf("A média de consumo em Km/L e o lucro do dia foram, respectivamente, %f e %f", media_consumo,lucro);
	
	return 0;		
}
