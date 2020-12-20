#include <stdio.h>
#define TURMA_C 60
#define TURMA_D 20

int main() {
	float percentual_reprovados_C, percetual_aprovados_D, reprovados_total;
	float reprovados_C, aprovados_D, percentual_reprovados_total;
	
	printf("Digite o percentual de alunos reprovados na turma C: ");
	scanf("%f", &percentual_reprovados_C);
	printf("Digite o percentual de alunos aprovados na turma D: ");
	scanf("%f", &percetual_aprovados_D);	
	
	reprovados_C = (TURMA_C*percentual_reprovados_C)/100;
	aprovados_D = (TURMA_D*percetual_aprovados_D)/100;
	reprovados_total = reprovados_C + (TURMA_D - aprovados_D);
	percentual_reprovados_total = reprovados_total*100/(TURMA_C + TURMA_D);
	
	printf("O numero de alunos reprovados na turma C eh: %f", reprovados_C);
	printf("\nO numero de alunos reprovados na turma D eh: %f", aprovados_D);	
	printf("\nA porcentagem de alunos reprovados em relacao ao total de alunos das duas turmas eh: %f", percentual_reprovados_total);
	
	return 0;
}
