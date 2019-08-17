#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[100];
	char c;
	int i;
	int pos = -1;

	printf("Digite uma String: ");
	gets(str);
	printf("Digite o caractere a ser encontrado: ");
	scanf("%c", &c);

	for (i = 0; i < strlen(str); ++i)
	{
		if(str[i] == c){
			pos = i;
			break;
		}
	}

	if (pos == -1)
	{
		printf("Esse caractere não esta presente nessa string.\n");
	}
	else
	{
		printf("Esse caractere aparece pela primeira vez na posição %d da string '%s' \n", pos+1, str);
	}
	return 0;
}