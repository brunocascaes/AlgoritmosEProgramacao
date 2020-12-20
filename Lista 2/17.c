#include <stdio.h>

int main (){
	float media, nota1, nota2, nota3, nota4;
	
	printf("Digite 4 notas:");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	
	media = (nota1 + (nota2*2) + (nota3*3) + nota4)/7;
	
	if (media >= 9)
		printf("Media: %f\n Conceito: A", media);
	
	else
	if (media >= 7.5 && media < 9)
		printf("Media: %f\n Conceito: B", media);
	
	else
	if (media >= 6 && media < 7.5)
		printf("Media: %f\n Conceito: C", media);
	
	else
		printf("Media: %f\n Conceito: D", media);
	
	return 0;
}
