#include <stdio.h>

int main (){
	float angulo1, angulo2, angulo3;
	
	printf("Digite os �ngulos de um triangulo: ");
	scanf("%f %f %f", &angulo1, &angulo2, &angulo3);
	
	if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90)
		printf("ACUT�NGULO");

	else
	if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90)
		printf("RET�NGULO");
	
	else
	if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90)
		printf("OBTUS�NGULO");
	
	return 0;
}
