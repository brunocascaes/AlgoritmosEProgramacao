#include<stdio.h>

int main() {
	int A[10], V, i, ocorrencias=0;

	printf("Digite um valor V: ");
	scanf("%d", &V);
	
	printf("Digite 10 elementos: ");
	for(i=0; i<10; i++)
		scanf("%d", &A[i]);
		
	for(i=0; i<10; i++)
		if(A[i] == V)
			ocorrencias += 1;
			
	printf("%d vezes", ocorrencias);
	
	return 0;
}
