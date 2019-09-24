#include <stdio.h>

int main()
{

    int x;
    int i=0;
    int mult;
    int diferenca,diferenca2;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &x);
    //x = 50;
    mult = i*i*i;
    diferenca = x-mult;
    if(diferenca < 0)
    {
        diferenca = -diferenca;
    }
    i++;
    mult = i*i*i;
    diferenca2 = x-mult;

    if(diferenca2 < 0)
    {
        diferenca2 = -diferenca2;
    }
    i++;

    while(diferenca2 < diferenca)
    {
        diferenca = diferenca2;
        mult = i*i*i;
        diferenca2 = x-mult;
        if(diferenca2 < 0)
        {
            diferenca2 = -diferenca2;
        }
        i++;
    }
    resultado = i-2;
    printf("%d", resultado);
}
