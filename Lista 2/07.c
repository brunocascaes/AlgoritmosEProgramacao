#include <stdio.h>

int main(){
	float altura, sexo, peso_ideal;
	
	printf("Digite a altura e o sexo (1 para feminino e 2 para masculino): ");
	scanf("%f %f", &altura, &sexo);
		
	if (sexo == 1) {		
		peso_ideal = (62.1*altura) - 44.7;
		printf ("O peso ideal eh: %f", peso_ideal);
	}
	else {
		if (sexo == 2) {
			peso_ideal = (72.7*altura) - 58;
			printf ("O peso ideal eh: %f", peso_ideal);
		}
	}
	
	return 0;
}
