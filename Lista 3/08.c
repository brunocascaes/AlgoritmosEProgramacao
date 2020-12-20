#include<stdio.h>

int main(){
	
	float nota1, nota2, media, novo_aluno;
	
	do {
		printf("Digite duas notas: ");
		scanf("%f %f", &nota1, &nota2);
		
		media = (nota1+nota2)/2;
		printf("A media eh: %f\n",media);
		
		printf("Outro aluno (1.sim 2.nao)? ");
		scanf("%f", &novo_aluno);	
	} while(novo_aluno == 1);
	
	return 0;
}
