#include <stdlib.h>
#include <stdio.h>
#include "misc.h"

//Buscar número na lista
int main (void){
    int tamanho_lista = 100;
    int procuraNum, leNum, cont = 0;

    geralista(tamanho_lista);
    FILE *entrada = fopen("lista.txt", "r");

    printf("Digite o número a ser procurado: ");
    scanf("%d", &procuraNum)


    while(fscanf(entrada, "%d\n", &leNum) == 1){
        if(procuraNum == leNum) {
            printf("Número encontrado na posição: %d", cont);
        }
        cont++;
    }
    


}