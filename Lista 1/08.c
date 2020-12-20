#include <stdio.h>

int main() {
	float numero_empregados, salario_minimo;
	float preco_custo_bicicleta, bicicletas_vendidas;
	float comissao, salario_vendedor, pagamento_funcionarios, lucro;
	
	printf("Digite o numero de empregados da loja e o valor do salario minimo: ");
	scanf("%f %f", &numero_empregados, &salario_minimo);
	printf("Digite o preco de custo de cada bicicleta e o numero de bicicletas vendidas: ");
	scanf("%f %f", &preco_custo_bicicleta, &bicicletas_vendidas);	
	
	comissao = (preco_custo_bicicleta*0.15*bicicletas_vendidas)/numero_empregados; //comissao para 1 funcionario
	salario_vendedor = (2*salario_minimo) + comissao; // salario de 1 funcionario
	pagamento_funcionarios = salario_vendedor * numero_empregados;
	lucro = ((preco_custo_bicicleta*2)*bicicletas_vendidas) - pagamento_funcionarios;
	
	printf("O salario final de cada empregado e o lucro da loja soo de: %f e %f", salario_vendedor, lucro);
	
	return 0;
}
