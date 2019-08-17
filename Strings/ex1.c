#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[50];
	int caracteres = 0;

	printf("Digite a string: ");
	gets(str);

	for (int i = 0; str[i] != '\0' ; ++i)
	{
		caracteres++;
	}

	printf("A string '%s' tem %d caracteres\n",str, caracteres);

	return 0;
}