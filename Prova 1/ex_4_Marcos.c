#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[200], termo[200];
    int tamString, tamTermo;
    int match;

    scanf("%[^\n]s", string);
    getchar();
    scanf("%[^\n]s", termo);
    getchar();

    tamString = strlen(string);
    tamTermo = strlen(termo);

    for (int i = 0; i < tamString; i++)
    {
        int k = i;
        match = 1;
        for (int j = 0; j < tamTermo; j++)
        {
            if (string[k] != termo[j])
            {
                match = 0;
                break;
            }
            k++;
        }
        if (match)
        {
            printf("%i ", i+1);
        }
    }

    printf("\n");

    return 0;
}

/*
ao encontrar um caracter igual, quero checar se os outros são iguais, se não, 



*/