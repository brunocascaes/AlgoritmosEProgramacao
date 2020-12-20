#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
	float raio, area;
	
	printf("Digite o raio de um circulo: ");
	scanf("%f", &raio);
	
	area = PI * pow(raio, raio);
	
	printf("A area do circulo eh: %f", area);
	
	return 0;	
}
