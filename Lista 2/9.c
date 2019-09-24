#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char A[5][10];
    char B[5][10];
    char Quadrilha[5][2][10];
    int i;
    int j=0;

    //lê o primeiro grupo de pessoas
    printf("Digite o primeiro grupo de pessoas: ");
    for( i = 0; i < 5; i++)
    {
        scanf("%[^\n]s", A[i]);
        getchar();
    }

    //lê o segundo grupo de pessoas
    printf("Digite o segundo grupo de pessoas: ");
    for( i = 0; i < 5; i++)
    {
        scanf("%[^\n]s", B[i]);
        getchar();
    }

    //adiciona o primeiro e o segundo grupo de pessoas a matriz quadrilha
    for( i = 0; i < 5; i++)
    {
        strcpy (Quadrilha[i][j], A[i]);
        strcpy (Quadrilha[i][j+1], B[i]);
    }

    //printa a matriz quadrilha
    printf("\nQuadrilha = \n");
    for( i = 0; i < 5; i++)
    {
        printf("%s %s\n", Quadrilha[i][j], Quadrilha[i][j+1]);
    }

    return 0;
}