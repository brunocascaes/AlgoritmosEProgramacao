#include<stdio.h>

int main(){
	
	float nota1, nota2, media;
	
	do {
		printf("Digite a primeira nota:");
		scanf("%f", &nota1);
		
		if (nota1 >= 0){
			printf("Digite a segunda nota:");
			scanf("%f", &nota2);
			
			media = (nota1+nota2)/2;
			printf("A media eh: %f\n", media);
		}	
	} while(nota1 >= 0);
	
	return 0;
}
