#include<stdio.h>

int main(){
	int X[10], Y[10], R[20], aux = 0, i;
	
	for(i=0; i<10; i++)
		scanf("%d", &X[i]);
		
	for(i=0; i<10; i++)
		scanf("%d", &Y[i]);
		
	for(i=0; i<20; i++){
		if(i%2 == 0)
			R[i] = X[aux];
		else {
			R[i] = Y[aux];
			aux += 1; 
		}
	}
		
	for(i=0; i<20; i++)
		printf("%d ", R[i]);
		
	return 0;
}
