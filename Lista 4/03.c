#include<stdio.h>

int main() {
	int B[10], i;

	for(i=0; i<10; i++) {
		if(i%2 == 0)
			B[i] = 20;
		else
			B[i] = 10; 
	}
		
	for(i=0; i<10; i++) {
		printf("%d ",B[i]);
	}
	
	return 0;
}
