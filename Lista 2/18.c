#include <stdio.h>

int main (){
	float litros_vendidos, tipo_combustivel, preco;
	float desconto, valor_pago;
	
	printf("Digite o numero de litros vendidos, o tipo de combustivel [1.Alcool 2.Gasolina] e o preço: ");
	scanf("%f %f %f", &litros_vendidos, &tipo_combustivel, &preco);
	
	if (tipo_combustivel == 1){
		if (litros_vendidos <= 20)
			desconto = (3*preco)/100;
		else
			desconto = (5*preco)/100;
	}
		
	else
	if (tipo_combustivel==2){
		if (litros_vendidos<=15)
			desconto = (3.5*preco)/100;
		else
			desconto = (6*preco)/100;
	}
	
	valor_pago = (preco*litros_vendidos) - (desconto*litros_vendidos);
	printf("Valor total a ser pago: %f", valor_pago);
	
	return 0;
}	
