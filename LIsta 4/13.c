#include<stdio.h>

int main(){
	int X[10], i, aux = 0, soma = 0;
	
	for(i=0; i<10; i++) {
		scanf("%d", &X[i]);
		aux += 1;
		if(X[i] <= 0)
			break; 
	}
	
	for(i=0; i<aux; i++){
		if(X[i] > 5)
			soma += X[i];
	}
			
	printf("%d", soma);
			
	return 0;
}
