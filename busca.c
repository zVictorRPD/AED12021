#include <stdlib.h>
#include <stdio.h>
#include "misc.h"
#include <time.h>
/*
int compara(int *a, int *b) {
	if (*a < *b) return -1;
	else if (*a==*b) return 0;
	else return 1;
}

int ordenalista(int tam) {
	FILE *entrada, *saida;
	int i;
	int a[MAXLISTA];

	if (tam > MAXLISTA) tam = MAXLISTA;

	entrada = fopen("lista.txt", "r");
	saida = fopen("listaordenada.txt", "w");

	for (i = 0; i< tam; i++) {
		fscanf(entrada, "%d", &a[i]);
	}

	qsort(a, tam, sizeof(int), compara);

	for (i = 0; i< tam; i++) {
		fprintf(saida, "%d\n", a[i]);
	}

	fclose(entrada);
	fclose(saida);
	return 0;
}



int geralista(int tam) {

	FILE *file;
	int i, num;

	if (tam > MAXLISTA) tam = MAXLISTA;

	file = fopen("lista.txt", "w");

	// muda a semente dos números aleatórios
	srand((unsigned) time(NULL)/2);

	for (i = 0; i< tam; i++) {
		num = rand();
		fprintf(file, "%d\n", num);
	}

	fclose(file);
	return 0;
}*/
//Buscar número na lista
int main (void){
    int tamanho_lista = 100;
    int procuraNum, leNum, cont = 0;

    if(fopen("lista.txt", "r") == NULL){
        geralista(tamanho_lista);
    }
    
    FILE *entrada = fopen("lista.txt", "r");

    printf("Digite o numero a ser procurado: ");
    scanf("%d", &procuraNum);


    while(fscanf(entrada, "%d\n", &leNum) == 1){
        if(procuraNum == leNum) {
            printf("Número encontrado na posição: %d", cont);
        }
        cont++;
    }

}

