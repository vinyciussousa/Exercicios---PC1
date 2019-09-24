#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char A[5][10]; //joao pedro paulo matheus lucas
    char B[5][10];  //maria paula ana renata lucas
    char quadrilha[5][2][10];

    for (int i = 0; i < 5; i++)
    {
        scanf("%[^\n]s", A[i]);
        getchar();
    };

    for (int i = 0; i < 5; i++)
    {
        scanf("%[^\n]s", B[i]);
        getchar();
    };

    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        strcpy(quadrilha[i][j], A[i]);
        strcpy(quadrilha[i][j+1], B[i]);
    }

    printf("Quadrilha = \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%s  ", quadrilha[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
