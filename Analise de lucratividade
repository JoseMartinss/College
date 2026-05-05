#include <stdio.h>

int main()
{
	float compra [10], venda [10], lucro = 0;
	int baixa = 0, media = 0, alta = 0;
	int i;
	
	for(i=0; i<10; i++){
		printf("Informe o valor de compra: \n");
		scanf("%f", &compra[i]);
		
		printf("Informe o valor de venda: \n");
		scanf("%f", &venda[i]);
	}
	for(i=0; i<10; i++){
		
		lucro = (venda[i]/compra[i]) - 1;
		
		if(lucro < 0.1) baixa += 1;
		else if (lucro > 0.1 && lucro <= 0.2) media += 1;
		else if (lucro > 0.2) alta += 1;
		
		
	}
	printf("=== Quantidade de produtos em: ===\n");
	printf("Baixa = %d\nMedia = %d\nAlta = %d", baixa, media, alta);
	
	
	
	return 0;
}
