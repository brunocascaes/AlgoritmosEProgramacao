#include <stdio.h>

int main (){
	float angulo1, angulo2, angulo3;
	
	printf("Digite os ângulos de um triangulo: ");
	scanf("%f %f %f", &angulo1, &angulo2, &angulo3);
	
	if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90)
		printf("ACUTÂNGULO");

	else
	if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90)
		printf("RETÂNGULO");
	
	else
	if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90)
		printf("OBTUSÂNGULO");
	
	return 0;
}
