#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <new>
#include <iostream>

#define tam 1000000

int main(void) {
    

    FILE * ent = fopen("lista.txt", "r");

    int numeroProcurado, numeroLido, posicao = 1;
    int i;

    
        printf("Digite um numero inteiro positivo para saber se ele esta na lista: ");
        scanf("%d", &numeroProcurado);
    
    
    
    for(i=0; i<tam; i++){
        fscanf(ent, "%d\n", &numeroProcurado); 
        if(numeroLido == numeroProcurado) break;
        posicao++;
    }

    if(i > tam) printf("Desculpe, o seu numero nao esta na lista.");
    else printf("O numero %d esta na posicao de numero %d.", numeroProcurado, posicao);
}