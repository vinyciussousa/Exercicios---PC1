#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int n;
	int j;
	
	printf("Digite um inteiro: ");
	scanf("%d", &n);

	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			printf("%d,%d\n", i, j);
		}
	}
	return 0;
}