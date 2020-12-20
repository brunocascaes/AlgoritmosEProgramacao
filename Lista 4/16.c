#include<stdio.h>

int main(){
	int A[6][6], B[6][6], i, j;
	
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			scanf("%d", &A[i][j]);
		}
	}
			
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			B[i][j] = A[i][j];
		}
	}
			
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			if(j == 0)
				A[i][1] = B[i][j];
			if(j == 1)
		    	A[i][0] = B[i][j];
			if(j == 2)
				A[i][3] = B[i][j];			
			if(j == 3)		
				A[i][2]= B[i][j];			
			if(j == 4)	
				A[i][5] = B[i][j];			
			if(j == 5)	
				A[i][4]= B[i][j];
		}
	}
			
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d ", A[i][j]);	
		}
		printf("\n");
	}
			
	return 0;	
}


