#include <stdio.h>
#include <math.h>
int main(){

	float xa, ya, za, xb, yb, zb, raioa, raiob;
	float distancia2 , somaRaios;
	
	printf(" == Infos Primeira Esfera == \n");
	printf("Coordenada X: ");
	scanf("%f", &xa);
	printf("Coordenada Y: ");
	scanf("%f", &ya);	
	printf("Coordenada Z: ");
	scanf("%f", &za);
	printf("Raio: ");
	scanf("%f", &raioa);
	
	printf(" == Infos Segunda Esfera == \n");
	printf("Coordenada X: ");
	scanf("%f", &xb);
	printf("Coordenada Y: ");
	scanf("%f", &yb);
	printf("Coordenada Z: ");
	scanf("%f", &zb);
	printf("Raio: ");
	scanf("%f", &raiob);
	
	
	
	distancia2 = pow((xa - xb), 2) + pow((ya - yb), 2) + pow((za - zb), 2);
	
	somaRaios = pow((raioa+raiob),2);
	
	if (distancia2 <= somaRaios){
    printf("-- Estao colidindo! --\n");
	}
	else {
    printf("-- Nao estao colidindo! --\n");
	}
	return 0;
}