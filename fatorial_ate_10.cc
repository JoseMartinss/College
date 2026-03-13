#include <stdio.h>

int main() {
 
    int num, x;
    int fatorial = 1;
    
    printf("Numero: ");
    scanf("%d", &num);
    
    if(num>=1 && num<=10)
	{
		
	
    
    for(x=1; x<=num;x++)
	{
		fatorial = fatorial*x;
		
	}
	printf("Fatorial de %d: %d",num, fatorial);
	}
	else
	{
		printf("numero invalido");
	}
    
    
}