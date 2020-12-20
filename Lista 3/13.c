#include <stdio.h>

int main (){
	float lado1, lado2, lado3, dados_corretos;
	
	do {
		printf("Digite os lados de um triangulo: ");
		scanf("%f %f %f", &lado1, &lado2, &lado3);
		
		printf("Os dados informados estão corretos (1.sim 2.não): ");
		scanf("%f", &dados_corretos);
	} while(dados_corretos == 2);
	
	if (lado1 == lado2 && lado2 == lado3)
		printf("EQUILATERO");

	else
	if ((lado1!=lado2 && lado2!=lado3) && lado1 != lado3)
		printf("ESCALENO");
	
	else
		printf("ISOSCELES");
	
	return 0;
}

