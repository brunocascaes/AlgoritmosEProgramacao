#include<stdio.h>

int main(){
	int A[10], i, soma = 10;

	for(i=0; i<10; i++) {
		A[i] = soma;
		soma += 10;
	}
		
	for(i=0; i<10; i++) {
		printf("%d ", A[i]);
	}
	
	return 0;
}
