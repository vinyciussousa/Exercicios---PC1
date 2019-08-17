#include <stdio.h>

#define MAX 10

int main(void)
{
	double x;
	printf("Digite o ãngulo em graus: ");
	scanf("%lf", &x);
	int i;
	double soma = 0.0;
	for (i = 0; i < MAX; ++i)
	{
		double fatorial = 1;
		int impar_atual = 2*i+1;
		int j;

		for (j = 1; j < impar_atual; ++j)
		{
			fatorial *= j;
		}

		double potencia = 1;

		for (j = 1; j < impar_atual; ++j)
		{
			potencia *= x;
		}

		printf("Potência = %.2lf\nFatorial = %.2lf\n", potencia, fatorial);

		if (i%2 == 0)
		{
			soma += potencia/fatorial;
		}

		else
		{
			soma -= potencia/fatorial;
		}
	}

	printf("sin(x) = %lf\n", soma);

    return 0;
}