#include <stdio.h>
int main(int argc, char** argv)
{
	
	float x, y;
	
	printf("Informe as coordenadas X e Y do pouso: \n");
	scanf("%f %f", &x, &y);
	
	int areaA = ( x >= 4 && x <= 14) && (y >= 4 && y <= 10);
	int areaB = ( x >= 16 && x <= 26) && (y >= 2 && y <= 12);
	
	if (areaA || areaB){
		printf("Pouso Autorizado");
	}
	else
	{
		printf("Pouso Nao Autorizado");
	}
	
	
	return 0;
}