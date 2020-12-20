#include<stdio.h>

int main() {
	int A[2][2], i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &A[i][j]);
		}
	}
			
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d", A[j][i]);
		}
	}
			
	return 0;
}
