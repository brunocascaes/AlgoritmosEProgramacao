#include<stdio.h>

int main(){
	int Q[10], i, valor = 0, indice = 0;
		
	for(i=0; i<10; i++){
		do {
			scanf("%d", &Q[i]);
		} while(Q[i] < 1); 
	}
		
	for(i=0; i<10; i++){
		if (Q[i] > valor){
			valor = Q[i];
			indice = i;
		}
	}
				
	printf("Maior valor e respectiva posição: %d %d", valor, indice);
		
	return 0;
}
