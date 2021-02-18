#include <stdio.h>
#include <locale.h>
#include "misc.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int escolha;
    int posicao;
    
    printf("Escolha a Operação Desejada:\n1 - Gerar Lista\n2 - Buscar\n");
    scanf("%d", &escolha);
    
    if(escolha == 1)
        geralista(1000000);
    else if(escolha == 2)
    {
        printf("Digite a Posição da Lista a ser Buscada:\n");
        scanf("%d", &posicao);
        
        char *numero = buscar(posicao);
        
        printf("O nº Presente na Posição %d %s %s", posicao, "é", numero);
    }
        	
	return 0;
}
