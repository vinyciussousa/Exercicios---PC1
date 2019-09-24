#include <stdio.h>

#define m 3
#define n 5

int main(int argc, char const *argv[])
{
    char Matriz[m][n][10];
    int i, j;

    //lê os valores da matriz
    printf("Digite a matriz de caracteres que deseja transpor: \n");
    for ( i = 0; i < m; i++)
    {
        for ( j= 0; j < n; j++)
        {
            scanf ("%s", Matriz[i][j]);
            getchar();
        }
    }
    printf ("\n");

    //imprime eles de forma transposta
    printf("A matriz transposta e: \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf ("%s ", Matriz[j][i]);
        }
        printf ("\n");
    }
    printf ("\n");

    return 0;
}