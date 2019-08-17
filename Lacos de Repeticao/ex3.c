#include<stdio.h>

#define MAX 10000

int main(void){

	double pi = 0.0;
	int i;

	for (i = 0; i < MAX; ++i)
	{
		pi += (double) 2/((4*i+1)*(4*i+3));
	}

	pi *= 4.0;

	printf("O valor de pi é: %lf\n", pi);

    return 0;
}