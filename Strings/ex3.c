#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50], str2[50];
	int i, j;

	printf("Digite a primeira String: \n");
	gets(str1);
	printf("Digite a segunda String: \n");
	gets(str2);

	for (i = 0; str1[i] != '\0'; i++);
	
	for (j = 0; str2[j] != '\0'; j++, i++)
	{
		str1[i] = str2[j];
	}

	str1[i]='\0';

	printf("As duas String unidas ficam: %s\n", str1);

	return 0;
}