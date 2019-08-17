#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sobrenome = 0;
	char nome[100];

	printf("Digite seu nome completo: \n");
	gets(nome);

	for (int i = 0; i < 100; ++i)
	{
		if(nome[i] == ' '){
			sobrenome++;
		}
	}

	printf("O nome '%s' tem %d sobrenomes\n", nome, sobrenome);

	return 0;
}