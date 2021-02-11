#include <stdio.h>
#include "misc.h"

int main(void) {
	geralista(1000000);
	int valor, posicao = 0,busca;
	printf("Digita o numero a ser buscado: \n");
	scanf("%d",&busca);
	FILE *ent = fopen("lista.txt","r");
	
	do{
		posicao++;
		fscanf(ent,"%d",&valor);
		if(valor == busca){
			printf("O numero esta na lista e se encontra na posicao: %d\n",posicao);
			break;
		}
		

	}while(valor != EOF);
	
	fclose(ent);
}
