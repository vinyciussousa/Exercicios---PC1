#include <stdio.h>
#include <string.h>

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
    FILE *fp;
    char string[51];
    char termo[6];
    int tamString;
    int tamTermo;
    int match = 1;
    int ch;
    fp = fopen("5.txt", "r+");

    fscanf(fp, "%[^\n]s", string);
    scanf("%5s", termo);
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

    printf("%s", string);
    rewind(fp);
    fclose(fp);
    
    fp = fopen("5.txt", "w");
    fprintf(fp, "%s", string);

    fclose(fp);
    return 0;
}
