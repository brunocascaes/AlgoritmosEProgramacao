#include <stdio.h>

int main (){
	float x, y;

	printf("Informe as coordenadas x e y de um ponto no sistema cartesiano: ");
	scanf("%f %f", &x, &y);
	
	if (x != 0 && y != 0){
		if (x > 0){
			if (y > 0)
				printf("PRIMEIRO QUADRANTE");
			if (y < 0)
				printf("QUARTO QUADRANTE");
		} else {
			if (x < 0)
			{
				if (y > 0)
					printf("SEGUNDO QUADRANTE");
				if (y < 0)
					printf("TERCEIRO QUADRANTE");
			}
		}
	}
	else {
		printf("NÃO ESTÁ EM NENHUM QUADRANTE");	
	}
	
	return 0;
}
