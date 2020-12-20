#include <stdio.h>
#include <math.h>

int main() {
	float comprimento, largura, altura;
	float area_total, caixas;
	
	printf("Digite o comprimento, a largura e a altura: ");
	scanf("%f %f %f", &comprimento, &largura, &altura);
	
	area_total = (comprimento*altura*2) + (largura*altura*2);
	caixas = area_total/1.5;
	
	caixas = ceil(caixas); //arredondamento para cima, caso necessário
	printf("A quantidade de caixas necessarias eh: %f", caixas);
	
	return 0;
}
