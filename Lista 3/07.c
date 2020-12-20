#include<stdio.h>

int main(){
	float raio, comprimento;
	
	do {
		printf("Digite o raio da circunferencia: ");
		scanf("%f", &raio);
		
		if (raio > 0) {
			comprimento = (2*3.14*raio);
			printf("O comprimento eh: %f\n", comprimento);
		}
		
	} while(raio > 0);
}
