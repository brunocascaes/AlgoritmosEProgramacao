#include <stdio.h>

int main() {
	float nota1, nota2, media;
	
	printf("Digite duas notas: ");
	scanf("%f %f", &nota1, &nota2);
	
	media = (nota1+nota2)/2;
	printf("A media do aluno eh: %f \n",media); 
	
	if (media >= 7)
		printf("Aprovado"); 
		
	else	
	if (media >= 3 && media < 7)
		printf("Exame");
		
	else
		printf("Reprovado");
		
	return 0;
}
