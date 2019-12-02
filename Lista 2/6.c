#include <stdio.h>
#include <string.h>

#define MAX 200

void removeTermo(char *string, int indice, int tamTermo){
    int i;
    i = indice;
    while (string[i+tamTermo] != '\0')
    {
        string[i] = string[i+tamTermo];
        i++;
    }
    string[i] = '\0';
}

int main(int argc, char const *argv[])
{
    
    char string[MAX], termo[MAX];
    int tamTermo;
    int tamString;
    int match=1;


    printf("Digite a string: ");
    scanf("%[^\n]s", string);
    getchar();
    printf("Digite o termo: ");
    scanf("%[^\n]s", termo);

    tamString = strlen(string);
    tamTermo = strlen(termo);

    for (int i = 0; i <= tamString - tamTermo; i++)
    {
        match = 1; 
        int k = i;
        for (int j = 0; j < tamTermo; j++)
        {
            if (termo[j] != string[k])
            {
                match = 0;
                break;
            }
            k++;
        }
        if (match == 1)
        {
            removeTermo(string, i, tamTermo);
            tamString = tamString - tamTermo;
            i--;
        }
    }

    printf("%s\n", string);

    return 0;
}
