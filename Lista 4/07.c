#include<stdio.h>
int main(){
	int X[10], R[10], i, j = 0;
	
	printf("Digite 10 elementos: ");
	for(i=0; i<10; i++) {
		scanf("%d", &X[i]);
	}
	
	for(i=0;i<10;i++) {
		if (X[i] < 0){
			R[j] = X[i];
			j += 1;
		}
	}
	
	for (i=0; i<j; i++){
		printf("%d", R[i]);
	}
	
	return 0;
}
