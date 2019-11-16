#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char msg[100];
    int i;
    char string[100];
    int cont = 0;
    int cont2 = 0;
    fp = fopen("conversa.txt", "a+");
    printf("Digite sua mensagem para seu amigo(a):");
    scanf("%[^\n]s", msg);
    getchar();

    while ((fgets(string, sizeof(string), fp)) != NULL)
    {
        for (i = 0; i < strlen(string); i++)
        {
            if (string[i] == '\n')
            {
                cont++;
            }
        }
    }
    printf("%i\n", cont);

    if (cont == 0)
    {
        fprintf(fp, "3.1: %s\n", msg);
    }

    rewind(fp);

    while ((fgets(string, sizeof(string), fp)) != NULL)
    {
        cont2++;
        if (string[2] == '2' && cont2 == cont)
        {
            fprintf(fp, "3.1: %s\n", msg);
        }
        else if (string[2] != '2' && cont2 == cont)
        {
            fprintf(stderr, "\nEspere o seu amigo respoder sua ultima mensagem!!\n");
        }
    }

    fclose(fp);
}