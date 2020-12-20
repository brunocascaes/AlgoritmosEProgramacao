#include<stdio.h>

int main(){
	int R[5], S[10], X[5], i, j, aux = 0;

	for(i=0; i<5; i++)
		scanf("%d", &R[i]);
			
	for(i=0; i<10; i++)
		scanf("%d", &S[i]);
		
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			if(R[i] == S[j]){
				X[aux] = R[i];
					aux += 1;
			}
		}
	}
						
	for(i=0; i<aux; i++)
		printf("%d ", X[i]);
		
	return 0;
}
		
		
	
