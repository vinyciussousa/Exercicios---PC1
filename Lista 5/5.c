#include <stdio.h>
#include <string.h>

void reverso(char string[], int tam, int i)
{
    char aux;
    if (i < tam/2)
    {
        aux = string[i];
        string[i] = string[tam - i];
        string[tam - i] = aux;
        reverso(string, tam, i + 1);
    }
    return;
}

int main(int argc, char const *argv[])
{
    char string[100];
    printf("Digite a string (tamanho maximo de 100 caracteres): \n");
    fgets(string, 100, stdin);
    int tam = strlen(string) - 1;
    printf("O reverso da string e: ");
    reverso(string, tam, 0);
    printf("%s", string);
    printf("\n");

    return 0;
}
 