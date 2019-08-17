#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i;
	int maior, segmaior;
	int menor, segmenor;
	int segmaior_def, segmenor_def;

	printf("Digite a quantidade de numeros a ser lida: \n");
	scanf("%d", &n);

	if(n>0)
	{
		int valor;
		scanf("%d", &valor);
		maior = valor;
		menor = valor;
		segmaior_def = 0;
		segmenor_def = 0;

		for (i = 0; i < n; ++i)
		{
			printf("Digite um valor: \n");
			scanf("%d", &valor);

			if (valor>maior)
			{
				segmaior = maior;
				maior = valor;
				segmaior_def = 1;
			}

			else if (!segmaior_def || valor>segmaior)
			{
				segmaior = valor;
				segmaior_def = 1;
			}

			if (valor<menor)
			{
				segmenor = menor;
				menor = valor;
				segmenor_def = 1;
			}

			else if (!segmenor_def || valor<segmenor)
			{
				segmenor = valor;
				segmenor_def = 1;
			}

		}

		printf("O maior valor é %d\n O menor valor é %d\n", maior, menor);

		if (segmaior_def)
		{
			printf("O segundo maior é %d\n", segmaior);
		}

		if (segmenor_def)
		{
			printf("O segundo menor é %d\n", segmenor);
		}
	}

	return 0;
}