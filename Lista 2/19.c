#include <stdio.h>

int main (){
	float lado1, lado2, lado3;
	
	printf("Digite os lados de um triangulo: ");
	scanf("%f %f %f", &lado1, &lado2, &lado3);
	
	if (lado1 == lado2 && lado2 == lado3)
		printf("EQUILATERO");

	else
	if ((lado1!=lado2 && lado2!=lado3) && lado1 != lado3)
		printf("ESCALENO");
	
	else
		printf("ISOSCELES");
	
	return 0;
}
