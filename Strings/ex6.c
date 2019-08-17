#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[50];
	int i;
	int palindromo = 1;

	printf("Digite sua palavra: ");
	gets(str);

	for (i = 0; i < strlen(str)/2; ++i)
	{
		if(str[i] != str[strlen(str) - i - 1]){
			palindromo = 0;
		}
	}

	if (palindromo)
	{
		printf("A palavra inserida é um palindromo.\n");
	}
	else{
		printf("A palavra inserida não é um palindromo.\n");
	}

	return 0;
}