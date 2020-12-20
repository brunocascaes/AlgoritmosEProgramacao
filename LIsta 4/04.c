#include<stdio.h>

int main() {
	int C[10], i;

	for(i=0; i<10; i++) {
		scanf("%d", &C[i]);
	}

	for(i=0; i<10; i++) {
		if(C[i] < 0)
			C[i] = 0; 
	}

	for(i=0; i<10; i++) 
		printf("%d ", C[i]);

	return 0;
}
