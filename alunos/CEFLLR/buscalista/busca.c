#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "misc.h"

int geralista(int tam){
	
	FILE *file;
	int i,num;
	
	if(tam>MAXLISTA) tam = MAXLISTA;
	
	file = fopen("lista.txt","w");
	
	//muda a semente dos numeros aleatorios
	srand((unsigned) time(NULL)/2);
	
	for(i = 0; i<tam; i++){
		num = rand();
		fprintf(file, "%d\n", num);
	}
	
	fclose(file);
	return 0;
}

int main(){
	int tam, num, numlista, i=1, k=0;
	
	printf("Digite o tamanho da lista:");
	scanf("%d",&tam);
	
	geralista(tam);
	
	printf("Verificar qual número na lista:");
	scanf("%d",&num);
	
	FILE *lista;
	lista = fopen("lista.txt","r");
	
	while(fscanf(lista, "%d\n", &numlista) ==1){
		if (num == numlista){
			k=1;
			break;
		}
		i++;
		
	}
	if(k ==0){
		printf("O número não está na lista");
	}else{
		printf("O número %d está na posição %d",num,i);
	}
	fclose(lista);
}
