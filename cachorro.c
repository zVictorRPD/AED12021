#include <stdio.h>

int main() {
	int TAMANHO = 10;
	int lista[10] = {1, 2, 3, 49, 4, 5, 6, 7, 8};
	int i, cachorro;

//Algoritmo do cachorro
	cachorro = 0; //Inicialização da variável -- conta como um passo

	// a inicialização de i [e um passo
	for (i = 1; i < TAMANHO; i++) { // o teste e o incremento são dois passos
		if (lista[i] > lista[cachorro]) { // A condição é um passo
			cachorro = i; // se a condição for verdadeira, um passo
		}
	} // A repetição é executada TAMANHO - 1 vezes

	printf("%d\n", lista[cachorro]); // escrita um passo

	return 0;
}
