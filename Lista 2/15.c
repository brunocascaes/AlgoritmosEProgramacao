#include <stdio.h>

int main (){
float x, y;

	printf("Informe as coordenadas x e y de um ponto no sistema cartesiano: ");
	scanf("%f %f", &x, &y);
	
	if (x > 0){
		if (y > 0)
			printf("PRIMEIRO QUADRANTE");
		else
			printf("QUARTO QUADRANTE");
	} else {
		if (y > 0)
			printf("SEGUNDO QUADRANTE");
		else
			printf("TERCEIRO QUADRANTE");
	}
	
	return 0;
}
