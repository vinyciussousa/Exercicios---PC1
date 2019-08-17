#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int n;
	int j;
	
	printf("Digite um inteiro: ");
	scanf("%d", &n);

	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			if (j == n)
			{
				printf("(%d,%d)", i, j);
				printf("\n");
			}
			else
			{
				printf("(%d,%d)", i, j);
			}

			//ou
			//printf("(%d,%d)",i,j);
            //if(j==n){
            //    printf("\n");
            //}
            //else{
            //    printf(",");
			//}
		}
	}
	return 0;
}