#include <stdio.h>
#include <string.h>

#define MAX 500

int main(int argc, char const *argv[])
{
    char p[MAX];

    fgets(p,sizeof(p), stdin); //recebe o texto

    printf("\n");

    for (int i = 0; i < strlen(p); i++) // a cada ponto identificado pula uma linha
    {
        if (p[i] == '.')
        {
            printf(".\n\n");
        }
        else
        {
            printf("%c", p[i]);
        }    
    }
    return 0;
}
