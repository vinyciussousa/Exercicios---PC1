#include <stdio.h>

#define MAX 5

void diagonalP(char matriz[MAX][MAX][10], int i)
{
    if (i < MAX)
    {
        printf("O elemento %d x %d da Diagonal Principal é: %s\n", i, i, matriz[i][i]);
        diagonalP(matriz, i + 1);
    }
}

int main(int argc, char const *argv[])
{
    char matriz[MAX][MAX][10];
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("Digite o elemento %d x %d da matriz: ", i+1, j+1);
            scanf("%10s", matriz[i][j]);
            getchar();
        }
    }
    puts("\n");
    diagonalP(matriz, 0);
    puts("\n");

    return 0;
}
