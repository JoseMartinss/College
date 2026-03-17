#include <stdio.h>
#include <stdlib.h>

int main(){

	
	int continuar;
		
	do{
		
	
	int escolha1, escolha2;
	
	
	printf("== Escolha Jogador 1==\n");
	printf("1- pedra \n 2- papel \n 3- tesoura \n Escolha: ");
	scanf("%d", &escolha1);
	
	system("cls");
	
	printf("\n\n\n== Escolha Jogador 2==\n");
	printf("1- pedra \n 2- papel \n 3- tesoura \n Escolha: ");
	scanf("%d", &escolha2);
	
	//para limpar a tela:
	system("cls");
	
	if(((escolha1==1) && (escolha2==3)) || ((escolha1==2) && (escolha2==1)) || ((escolha1==3) && (escolha2==2)))
	{
		printf("\n== JOGADOR 1 VENCEU ==\n");
	}
	else if(((escolha2==1) && (escolha1==3)) || ((escolha2==2) && (escolha1==1)) || ((escolha2==3) && (escolha1==2))){
		printf("\n== JOGADOR 2 VENCEU ==\n");
	}
	else if(escolha1==escolha2)
	{
		printf("\n== EMPATE ==\n");
	}
		printf("\n *** JOGAR NOVAMENTE? ***\n");
		printf("\n1- SIM   2- NAO\n");
		printf("Escolha: ");
		scanf("%d", &continuar);
		
	system("cls");
	}
	while(continuar != 2);
	
	
	return 0;
}