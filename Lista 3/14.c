#include <stdio.h>

int main() {
	
	int i, j, resposta;
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++) {
			resposta = i*j;
			printf("%d x %d = %d\n", i, j, resposta);
		}
		printf("\n");
	}
	
	return 0;
}
