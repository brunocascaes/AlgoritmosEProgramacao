#include<stdio.h>

int main(){
	int U[10], V[10], i, aux = 9;
	
	for(i=0; i<10; i++)
		scanf("%d", &U[i]);
		
	for(i=0; i<10; i++)
		V[i] = U[i];
		
	for(i=0; i<10; i++){
		U[aux] = V[i];
		aux -= 1;
	}
		
	for(i=0; i<10; i++)
		printf("%d ", U[i]);
	
	return 0;
}
