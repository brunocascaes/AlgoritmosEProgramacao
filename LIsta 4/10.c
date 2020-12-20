#include<stdio.h>

int main(){
	
	int M[10], A[10], i, aux = 5;
	
	for(i=0; i<10; i++)
		scanf("%d", &M[i]);
		
	for(i=0; i<10; i++)
		A[i] = M[i];
		
	for(i=0; i<5; i++){
		M[aux] = A[i]; 
		M[i] = A[aux]; 
		aux -= 1;}
		
	for(i=0; i<10; i++)
		printf("%d ", M[i]);
	
	return 0;
}
