#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[100];
	int i;

	printf("Digite sua String: \n");
	gets(str);

	for (i = 0; i < strlen(str)/2; ++i)
	{
		char c = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i -1] = c;
	}

	printf("Sua String ao contrario é a seguinte: %s\n", str);
	return 0;
}