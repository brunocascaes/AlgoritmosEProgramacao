#include<stdio.h>

int main() {
	int X[10], Y[10], i;

	printf("Digite 10 elementos: ");
	for(i=0; i<10; i++)
		scanf("%d", &X[i]);
		
	for(i=0; i<10; i++) {
		if(i%2 == 0)
			Y[i] = X[i] * 2;
		else
			Y[i] = X[i] * 3;
	}
			
	for(i=0; i<10; i++)
		printf("%d ",Y[i]);
		
	return 0;
}
