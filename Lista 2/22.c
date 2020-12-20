#include <stdio.h>

int main (){
	float preco_morango, preco_maca, kg_morango, kg_maca, desconto, pago;
	
	printf("Digite a quantidade de kgs de morango e maça: ");
	scanf("%f %f", &kg_morango, &kg_maca);
	
	if (kg_morango <= 5)
		preco_morango = kg_morango*5;
	else
		preco_morango = kg_morango*4;
		
	if (kg_maca <= 5)
		preco_maca = kg_maca*3;
	else
		preco_maca = kg_maca*2;
		
	pago = preco_morango + preco_maca;
	
	if (pago > 35 || (kg_morango + kg_maca) > 8) {
		desconto = pago*0.2;
		pago = pago-desconto;
	}
	
	printf("O valor a ser pago eh: %f", pago);
	
	return 0;
}
	

