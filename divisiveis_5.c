#include <stdio.h>
int main()
{
	int numero;
	int divisao;
	
	for(numero=0; numero<15; numero++)
	{
		if((numero>0)&&(numero%5==0)){
			
			printf("%d\n", numero);
			
		}
	}
	
	return 0;
}