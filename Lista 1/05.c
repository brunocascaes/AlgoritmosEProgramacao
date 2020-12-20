#include <stdio.h>

int main() {
	float eleitores, voto_branco, voto_nulo, voto_valido;
	float percentual_branco, percentual_nulo, percentual_valido;
	
	printf("Digite o numero de eleitores, votos brancos, nulos e validos de um municipio: ");
	scanf("%f %f %f %f", &eleitores, &voto_branco, &voto_nulo, &voto_valido);
	
	percentual_branco = (voto_branco*100)/eleitores;	
	percentual_nulo = (voto_nulo*100)/eleitores;
	percentual_valido = (voto_valido*100)/eleitores;
	
	printf("O percentual dos votos brancos, nulos e válidos em relação ao total de eleitores eh: %f, %f e %f", percentual_branco, percentual_nulo, percentual_valido);
	
	return 0;	
	
}
