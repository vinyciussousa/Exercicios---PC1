#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%c", &matriz[i][j]);
            getchar();
        }
    }

    printf("\n");

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            matriz[i][j] = 'X';
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
    
}

/*i j 

ij i i i i
j
j 
j 
j 

a b c d e
f g h i j
k l m n o
p q r s t
u v x y z

0 1 2 3 4
1
2
3
4
*/