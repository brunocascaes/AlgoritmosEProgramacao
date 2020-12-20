#include <stdio.h>

int main() {	
	float numero_lados, medida_lado, perimetro, area;
	printf("Digite o numero de lados do poligono regular: ");
	scanf("%f", &numero_lados);
	
	if (numero_lados == 3 || numero_lados == 4) {
		printf("Digite a medida do lado: ");
		scanf("%f", &medida_lado);
		
		if (numero_lados == 3) {
			printf("TRIANGULO\n");
			perimetro = medida_lado*3;
			printf("Valor do perimetro eh: %f", perimetro);
		}
		
		else {
			printf("QUADRADO\n");
			area = medida_lado*medida_lado;
			printf("Valor da area eh: %f", area);	
		}
	}
	
	else {
		if (numero_lados == 5){
			printf("PENTAGONO");
		}	
	}
	
	return 0;
}
