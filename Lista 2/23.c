#include <stdio.h>

int main (){
	float saldo_conta_corrente, saldo_poupanca;
	float limite1, limite2;
	
	printf("Digite o saldo da conta corrente e o da conta poupança: ");
	scanf("%f %f", &saldo_conta_corrente, &saldo_poupanca);
	
	if (saldo_conta_corrente < 1000 && saldo_poupanca < 1000) {
		printf("SEM CONTA ESPECIAL");	
	} else {
		if (saldo_conta_corrente > saldo_poupanca) {
			limite1 = saldo_conta_corrente * 2;
			limite2 = saldo_poupanca * 3;
		} else {
			limite1 = saldo_poupanca * 2;
			limite2 = saldo_conta_corrente * 3;			
		}
		if (limite1 > limite2) {
			printf("LIMITE: %f", limite1);
		} else {
			printf("LIMITE: %f", limite2);
		}
	}
	
	return 0;
}
