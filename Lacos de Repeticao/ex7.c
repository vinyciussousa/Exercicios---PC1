#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int i;
	int primo = 1;

	printf("Digite um número: ");
	scanf("%d", &n);

	if(n == 1){
		printf("1 não é nem primo nem composto.\n");
		return 0;
	}

	else{
		for (i = 2; i < n; ++i)
		{
			if (n%i == 0)
			{
				primo = 0;
			}
		}
	}

	if (primo == 0)
	{
		printf("O número é composto.\n");
	}

	else{
		printf("O número é primo\n");
	}
	return 0;
}