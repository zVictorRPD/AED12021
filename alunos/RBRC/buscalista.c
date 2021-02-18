#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	// Perguntamos para o usuário o nome do arquivo e o número que se deseja encontrar.
	if (argc < 3)
	{
		fprintf(stderr, "Uso: %s <nome do arquivo> <número>\n", argv[0]);
		return -1;
	}

	
	// Convertemos a sequência de caracteres da entrada em um inteiro long. (base 10)
	long numero = strtol(argv[2], NULL, 10);
	
	// Nosso arquivo.
	FILE *arquivo;
	
	// Inteiro long que vamos ter a partir de cada linha.
	long i;

	// Sequência de caracteres que vamos ler por vez de cada linha do arquivo.
	char linha[128];

	// Flag para sabermos se encontramos o número desejado ou não.
	int encontrado = 0;


	// Tentamos abrir o arquivo desejado (apenas leitura)
	arquivo = fopen(argv[1], "r");
	if (arquivo == NULL)
	{
		// Deu ruim. Podemos assumir nesse caso que de duas uma, ou o arquivo não existe, ou o usuário não tem permissão de leitura.
		fprintf(stderr, "Erro ao abrir arquivo %s\n", argv[1]);
		return -1;
	}

	
	// Agora vamos executar uma busca linear no arquivo, varrendo todas as n linhas do arquivo.
	
	// Enquanto pudermos ler uma linha limitada por uma quebra de linha... (vamos sempre ler no máximo 128 caracteres!)
	while (fgets(linha, sizeof(linha), arquivo) != NULL)
	{
		// Tentamos converter a sequência de caracteres lidos da linha em um número inteiro long. (base 10)
		i = strtol(linha, NULL, 10);
		
		// Se o número for encontrado, setamos a flag, e então saimos do laço
		if (i == numero)
		{
			fprintf(stdout, "Número encontrado: %ld\n", i);
			encontrado = 1;
			break;
		}
	}

	if (!encontrado)
	{
		fprintf(stdout, "Não foi possível encontrar o número %ld no arquivo %s\n", numero, argv[1]);
	}	
	
	fclose(arquivo);
	
	return 0;
}
