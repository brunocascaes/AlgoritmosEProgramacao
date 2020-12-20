#include <stdio.h>

int main (){
	float idade_homem1, idade_homem2, idade_mulher1, idade_mulher2;
	float soma, produto;
	
	printf("Digite a idade de 2 homens e 2 mulheres:");
	scanf("%f %f %f %f", &idade_homem1, &idade_homem2, &idade_mulher1, &idade_mulher2);
	
	if (idade_homem1 > idade_homem2 && idade_mulher1 > idade_mulher2) {
		soma = idade_homem1 + idade_mulher2;
		produto = idade_homem2 * idade_mulher1; 
	} else if (idade_homem1 > idade_homem2 && idade_mulher2 > idade_mulher1) {
		soma = idade_homem1 + idade_mulher1;
		produto = idade_homem2 * idade_mulher2; 		
	} else if (idade_homem1 < idade_homem2 && idade_mulher1 > idade_mulher2) {
		soma = idade_homem2 + idade_mulher2;
		produto = idade_homem1 * idade_mulher1; 		
	} else {
		soma = idade_homem2 + idade_mulher1;
		produto = idade_homem1 * idade_mulher2; 
	}
	
	printf("%f %f", soma, produto);
	
	return;
}
